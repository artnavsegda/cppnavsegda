#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	ifstream thefile ("test2.txt");
	if (thefile.is_open())
	{
		while (getline(thefile,line))
		{
			cout << line << endl;
		}
		thefile.close();
	}
	return 0;
}
