#include <iostream>
using namespace std;

struct myclass
{
	myclass();
	myclass(const myclass &obj);
	~myclass();
	int i;
	void printi();
	void operator !();
};

myclass::myclass()
{
	cout << "Class created\n";
}

myclass::myclass(const myclass &obj)
{
	cout << "Class copied\n";
}

myclass::~myclass()
{
	cout << "Class destroyed\n";
}

void myclass::operator !()
{
	cout << "Double cross\n";
}

void myclass::printi()
{
	cout << i << endl;
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
	!myobj;
	myclass myobj2 = myobj;
}

