#include <list.h>
#include <strng.h>
#include <iostream.h>

void main()
{
  List l;
  String *s1 = new String("One");
	String *s2 = new String("Two..");
	String *s3 = new String("Three...");
  l.add(*s1);
  l.add(*s2);
  l.add(*s3);
// Iterate over list
  ListIterator li(l);
  while(li)
  {
    cout << li++ << endl;
  }
}
