#include <iostream>
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

int main()
{
	fs::remove("test.txt");
	return 0;
}
