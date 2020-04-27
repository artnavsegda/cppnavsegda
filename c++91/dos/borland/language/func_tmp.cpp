#include <iostream.h>

template <class T>
void printnum(T number)
{
	cout << number;
	cout << '\n';
}

int main()
{
	int inum = 1;
	float fnum = 1.0;

	printnum(inum);
	printnum(fnum);
}
