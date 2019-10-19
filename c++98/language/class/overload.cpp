#include <iostream>
using namespace std;

struct myclass
{
	void operator !();
};


void myclass::operator !()
{
	cout << "Double cross\n";
}

int main()
{
	myclass myobj;
	!myobj;
}

