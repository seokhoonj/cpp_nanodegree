#include <fstream>
#include <iostream>
#include <string>

/*
1. #include <fstream>
2. Create a std::ifstream object using the path to your file.
3. Evaluate the std::ifstream object as a bool to ensure that the stream creation did not fail.
4. Use a while loop with getline to write file lines to a string
*/

int main()
{
	std::ifstream my_life;
	my_life.open("files/1.board");
	if (my_file) {
		std::cout << "The file stream has been created!" << "\n";
		std::string line;
		while (getline(my_file, line)) {
			std::cout << line << "\n";
		}
	}
}
