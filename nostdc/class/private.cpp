#include <stdio.h>

class myclass
{
	int i;
	public:
		void printi();
		void seti(int itoset);
};

void myclass::printi()
{
	printf("%d\n", i);
}

void myclass::seti(int itoset)
{
	i = itoset;
}

int main()
{
	myclass myobj;
	myobj.seti(20);
	myobj.printi();
}

