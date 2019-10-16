#include <stdio.h>

int main()
{
	int x = 10;
	decltype(x) i = 42;
  printf("hello %d %d\n",i,x);
	return 0;
}
