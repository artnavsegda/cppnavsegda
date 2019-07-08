#include <iostream>
using namespace std;

struct myclass
{
	myclass();
	myclass(int i);
	myclass(myclass &obj);
	myclass(myclass &&obj);
	~myclass();
};

myclass::myclass()
{
	cout << "Class created\n";
}

myclass::myclass(int i)
{
	cout << "Class created with parameter " << i << endl;
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
	myclass myobj3(20);
}

