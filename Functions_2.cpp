#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int AdditionFunction(vector<int> v)
{
	int _sum = 0;
	for (int i : v)
		_sum += i;

	return _sum;
}

int main()
{
	vector<int> v {1, 2, 3};

	cout << AdditionFunction(v) << "\n";
	return 0;
}
