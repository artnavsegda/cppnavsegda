#include <iostream.h>
#include <fstream.h>

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
