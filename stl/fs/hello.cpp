#include <iostream>

using namespace std;


int main()
{
	cout << "Please say your name: " << endl;
	string yourname;
	cin >> yourname;
	if (!cin)
		cerr << "Error" << endl;
	cout << "Hello, " << yourname << endl;
	return 0;
}
