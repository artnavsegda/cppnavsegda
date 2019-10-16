#include <stdio.h>

class myclass
{
	public:
		int i;
		void printi();
};

void myclass::printi()
{
  printf("hello %d\n",i);
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

