#include <iostream>
#include <string>
using std::cout;
using std::string;

void PrintStrings(string a, string b) {
	cout << a << " " << b << "\n";
}

int main() {
	string s1 = "C++ is ";
	string s2 = "super awesome.";

	PrintStrings(s1, s2);
}
