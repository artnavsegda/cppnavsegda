#include "std_lib_facilities.h"

int main()
{
	cout << "Please say your name and age: " << endl;
	string yourname;
	int age;
	cin >> yourname >> age;
	cout << "Hello, " << yourname << " aged " << age << endl;
	return 0;
}
