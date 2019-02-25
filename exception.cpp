#include "std_lib_facilities.h"

class Bad_number { };

int main()
{
	cout << "Please say number: " << endl;

	try {
		int yournumber;
		cin >> yournumber;
		if (yournumber <= 0) throw Bad_number();
		cout << "Number is " << yournumber << endl;
	}
	catch (Bad_number)
	{
		cout << "Incorrect number" << endl;
	}

	return 0;
}
