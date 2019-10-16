#include <stdio.h>

int main()
{
	auto sum = [](int a, int b) { return a + b; };
	printf("Sum of two integers: %d\n", sum(5, 6));
	  
	return 0;
}

