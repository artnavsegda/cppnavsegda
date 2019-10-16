#include <iostream>
#include <string>
using namespace std;

int main()
{
	auto sum = [](int a, int b) { return a + b; };
	cout <<"Sum of two integers:"<< sum(5, 6) << endl;
	  
	return 0;
}

