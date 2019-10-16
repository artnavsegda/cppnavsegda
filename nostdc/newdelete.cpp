#include <stdio.h>

int main()
{
	int * i = new int;
	*i = 34;
	printf("%d\n", *i);
	delete i;
}

