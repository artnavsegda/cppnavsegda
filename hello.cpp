#include "std_lib_facilities.h"

int main()
{
	cout << "Please say your name: " << endl;
	string yourname;
	cin >> yourname;
	if (cin)
		cout << "Hello, " << yourname << endl;
	else
		cerr << "Error" << endl;
	return 0;
}
