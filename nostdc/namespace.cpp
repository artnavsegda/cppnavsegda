#include <stdio.h>

namespace myspace
{
	int i = 100;
	void hello(void);
}

void myspace::hello(void)
{
	printf("hello\n");
}

int main()
{
	printf("%d\n", myspace::i);
	myspace::hello();
}
