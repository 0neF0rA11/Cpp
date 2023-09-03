#include <iostream>

using namespace std;

void factorial(int number)
{
	int amount = 1;
	
	for (int i = 1; i < number+1; ++i)
		amount *= i;
	cout << amount;
}

int main()
{
	factorial(5);
}
