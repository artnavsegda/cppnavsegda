#include <iostream.h>

void myfunc2(int number)
{
	if (number == 34)
	{
		throw "Number is thirty four";
	}
	cout << number;
	cout << '\n';
}


void myfunc(int number)
{
	try
	{
		myfunc2(number);
	}
	catch (char * msg)
	{
		cout << msg;
	}
}

int main()
{
	myfunc(22);
	myfunc(34);
}
