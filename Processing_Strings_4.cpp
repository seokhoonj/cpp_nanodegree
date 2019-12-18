/* Strings with Mixed Types */
// in the stream example above, the string contained only whitespaces and characters which could be converted to **int**s. if the string has mixed types, more care is needed to process the string. In the following example, the type **char** is used, which is a type that can hold only a single ASCII character
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string b("1, 2, 3");

	istringstream my_stream(b);

	char c;
	int n;

	while (my_stream >> n >> c) {
		cout << "That stream was successful:" << n << " " << c << "\n";
	}
	cout << "The stream has failed." << "\n";
}
