#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char,int> m;
  m['a']=10;
  m['b']=30;
  m['c']=50;
  m['d']=70;

	map<char,int> b(m.begin(), m.end());

	cout << "Map b size is " << b.size() << endl;

	return 0;
}
