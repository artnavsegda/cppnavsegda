#include <stdio.h>

template <typename T>
void printnum(T number)
{
  printf("%d\n",number);
}

int main()
{
	printnum<int>(1);
	printnum<float>(1.0);
}

