#include <iostream>
#include <string>

using namespace std;


int main()
{
	string str;
	str = (string)"hello" + (string)"world";
	cout << str << endl;
	cout << str.length() << endl;
	return 0;
}
