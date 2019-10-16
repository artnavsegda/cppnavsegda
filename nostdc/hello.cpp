#include <stdio.h>

class A
{
    int *x;

public:
    A () { x = new int [10]; }
    ~A () { delete [] x; }
};

int main()
{
  A a;
	printf("hello world\n");
	return 0;
}
