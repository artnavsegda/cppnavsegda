#include <stdio.h>

int main()
{
	int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto &i: array)
		printf("%d", array[i]);
	putchar('\n');
}