#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream thefile ("test.txt");
	if (thefile.is_open())
	{
		thefile << "Writing text";
		thefile.close();
	}
	return 0;
}
