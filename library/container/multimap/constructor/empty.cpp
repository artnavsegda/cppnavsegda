#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char,int> m;
	cout << "Map m size is " << m.size() << endl;

  m['a']=10;
  m['b']=30;
  m['c']=50;
  m['d']=70;

	cout << "Map m size is " << m.size() << endl;

	return 0;
}
