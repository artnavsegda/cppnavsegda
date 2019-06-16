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
	printnum<int>(1);
	printnum<float>(1.0);
}

