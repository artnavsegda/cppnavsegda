#include <iostream>
#include <experimental/filesystem>

using namespace std;
using namespace std::experimental::filesystem;

int main()
{
	remove("test.txt");
	return 0;
}
