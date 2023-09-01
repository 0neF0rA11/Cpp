#include <iostream>

using namespace std;


int main() {
	int value_1, value_2;
	cout << "Input first number: ";
	cin >> value_1;
	cout << "Input second number: ";
	cin >> value_2;
	if (value_1 == value_2)
		cout << "Equality of numbers";
	else if (value_1 > value_2)
		cout << "The first number is greater than the second";
	else
		cout << "Tht second number is greater than the first";
	return 0;
}