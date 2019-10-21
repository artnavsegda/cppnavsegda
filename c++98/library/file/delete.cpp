#include <iostream>
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

int main()
{
	fs::remove("test2.txt");
	return 0;
}
