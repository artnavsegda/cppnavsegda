#include <stdio.h>

struct myclass
{
	int i;
	void printi();
	struct nestclass
	{
		int y;
		void printy();
	};
};

void myclass::printi()
{
	printf("%d\n",i);
}

void myclass::nestclass::printy()
{
	printf("%d\n",y);
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

