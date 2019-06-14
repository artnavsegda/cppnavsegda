#include <iostream>

using namespace std;

template <typename T>
void printnum(T number)
{
	cout << number;
	cout << '\n';
}

int main()
{
	printnum(1);
	printnum(1.1);
}

