#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <xinput.h>
#include <forward_list>
#include <vector>

using namespace std;

static unsigned char player_image[3] = {0xb2, 0xb2, 0x00};
static unsigned char enemy_image[3] = {0xb1, 0xb1, 0x00};
static unsigned char border_image[3] = {0xdb, 0xdb, 0x00};

enum enum_entityType {PLAYER, ENEMY};

class Entity
{
protected:
    unsigned int health;
    unsigned int x;
    unsigned int y;

public:
    enum enum_entityType entityType;
    Entity() = default;
    void printcoord(){
        printf("x:%d y:%d\n",x,y);
    }
    unsigned short getx(){
        return x;
    }
    unsigned short gety(){
        return y;
    }
    void moveUp(){
        y--;
    }
    void moveDown(){
        y++;
    }
    void moveLeft(){
        x--;
    }
    void moveRight(){
        x++;
    }
};

class Player : Entity
{
public:
    Player() {
        entityType = PLAYER;
        health = 100;
        x = 10;
        y = 10;
    }
};

class Enemy : Entity
{
public:
    Enemy() : Entity() {
        entityType = ENEMY;
        health = 40;
        x = rand()/(RAND_MAX/30)+1;
        y = rand()/(RAND_MAX/30)+1;
    }
};

class Gamestate
{
private:
    forward_list<Entity*> Entities;
    Entity * mainPlayer;

public:
    Gamestate() {
        mainPlayer = (Entity*)new Player;
        for (int i = 0; i<10; i++)
        {
            Entities.push_front((Entity*)new Enemy);
        }
        Entities.push_front(mainPlayer);
    }

    forward_list<Entity*> getEntities()
    {
        return Entities;
    }

    Entity* getMainPlayer()
    {
        return mainPlayer;
    }
};

void drawworld(Gamestate mygame)
{
    char text[10000] = {};

    for (int y = 0; y < 32; y++)
    {
        for (int x = 0; x < 32; x++)
        {
                    if(y == 0 || y == 31 || x == 0 || x == 31)
                        strcat(text,(char *)border_image);
                    else {

                        bool empty = true;

                        forward_list<Entity*> Entities = mygame.getEntities();
                        for (forward_list<Entity*>::iterator it = Entities.begin(); it != Entities.end(); ++it)
                        {
                            if (((*it)->getx()) == x && ((*it)->gety() == y))
                            {
                                if (empty)
                                {
                                    switch ((*it)->entityType)
                                    {
                                        case ENEMY:
                                            strcat(text,(char *)enemy_image);
                                            empty = false;
                                        break;
                                        case PLAYER:
                                            strcat(text,(char *)player_image);
                                            empty = false;
                                        break;
                                    }
                                }
                            }
                        }
                        if (empty)
                            strcat(text,"  ");
                    }
        }
        strcat(text,"\n");
    }
    puts(text);
}

int main()
{
    srand(12356);
    Gamestate mygame;
    XINPUT_STATE state = {};

//    forward_list<Entity*> Entities = mygame.getEntities();

//    for (forward_list<Entity*>::iterator it = Entities.begin(); it != Entities.end(); ++it)
//    {
//        (*it)->printcoord();
//    }

    Entity * mainPlayer = mygame.getMainPlayer();

    while(true)
    {
        XInputGetState(0, &state);

        if(state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT)
            mainPlayer->moveRight();
        else if(state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_LEFT)
            mainPlayer->moveLeft();
        else if(state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_DOWN)
            mainPlayer->moveDown();
        else if(state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_UP)
            mainPlayer->moveUp();

        drawworld(mygame);
        Sleep(100);
        system("cls");
    }


    return 0;
}
