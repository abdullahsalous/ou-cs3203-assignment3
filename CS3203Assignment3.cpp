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

vector<int> reverse(vector<int> a) {
	vector<int> newA;
	for (int i = a.size() - 1; i >= 0; --i) {
		newA.push_back(a[i]);
	}

	return newA;
}

int main() {
	
	cout << "Type values to create an int array seperated by a space and type a random character once finished" << endl;

	int x;
	vector<int> array;

	while (cin >> x) {
		array.push_back(x);
	}

	cout << "Sum: " << sumOfList(array) << endl;
	cout << "Product: " << productOfList(array) << endl;
	cout << "Reversed Array: " << endl;
	array = reverse(array);
	for (int i = 0; i < array.size(); ++i) {
		cout << array[i] << ' ';
	}

	return 0;
}
