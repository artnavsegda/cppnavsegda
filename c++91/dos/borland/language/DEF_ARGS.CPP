#include <iostream.h>

void hello(int i = 10)
{
  cout << "hello " << i << endl;
}

int main()
{
  hello();
  hello(20);

	return 0;
}
