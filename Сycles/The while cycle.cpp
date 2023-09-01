#include <iostream>

using namespace std;


int main() {
	int user_number, count = 0;
	double amount = 0;
	cout << "Input number: ";
	cin >> user_number;
	while (user_number != 0) {
		amount += user_number;
		count++;
		cout << "Input number: ";
		cin >> user_number;
	}
	cout << "Count: " << count << endl;
	cout << "Amount: " << amount << endl;
	cout << "Average: " << amount / count << endl;
} 