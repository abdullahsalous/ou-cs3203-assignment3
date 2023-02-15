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

int main() {
	
	cout << "Type values to create an int array seperated by a space and type a random character once finished" << endl;

	int x;
	vector<int> array;

	while (cin >> x) {
		array.push_back(x);
	}

	cout << "Sum: " << sumOfList(array) << endl;
	cout << "Product: " << productOfList(array);
	return 0;
}
