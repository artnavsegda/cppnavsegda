#include <iostream>
using namespace std;

struct myclass
{
	myclass();
	myclass(myclass &obj);
	myclass(myclass &&obj);
	~myclass();
};

myclass::myclass()
{
	cout << "Class created\n";
}

myclass::myclass(myclass &obj)
{
	cout << "Class copied\n";
}

myclass::myclass(myclass &&obj)
{
	cout << "Class moved\n";
}

myclass::~myclass()
{
	cout << "Class destroyed\n";
}

int main()
{
	myclass myobj;
	myclass myobj2 = myobj;
}

