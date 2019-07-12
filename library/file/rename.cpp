#include <iostream>
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

int main()
{
	fs::rename("test.txt","test2.txt");
	return 0;
}
