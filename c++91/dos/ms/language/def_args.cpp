#include <stdio.h>

void hello(int i = 10)
{
  printf("hello %d\n", i);
}

int main()
{
  hello();
  hello(20);

	return 0;
}
