#include <iostream>
#include <vector>

using namespace std;

int sumOfList(vector<int> a)
{
	int sum = 0;
	for (int i = 0; i < a.size(); ++i) {
		sum += a[i];
	}
	return sum;
}

int productOfList(vector<int> a)
{
	int product = 1;
	for (int i = 0; i < a.size(); ++i) {
		product *= a[i];
	}
	return product;
}
