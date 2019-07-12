#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream thefile;
	thefile.open("file.txt");
	thefile << "Writing text";
	thefile.close();
	return 0;
}
