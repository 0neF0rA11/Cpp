#include <iostream>

using namespace std;

int main() {
	bool value;
	cout << "Make of some transaction.....";
	cout << "Do you want to make another transaction ... (Y: 1, N: 0) ";
	cin >> value;

	value == 1 ? cout << "Choose another transaction\n......\n\n\n\n" : cout << "Goodbye, Don't forget to take a card.";
	return 0;
}