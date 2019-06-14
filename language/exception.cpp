#include <iostream>

using namespace std;

int main()
{
	cout << "Please say number: " << endl;

	try {
		int yournumber;
		cin >> yournumber;
		if (!cin) throw runtime_error("Incorrect number");
		cout << "Number is " << yournumber << endl;
		return 0;
	}
	catch (exception& e)
	{
		cout << "error: " << e.what() << endl;
		return 1;
	}

}
