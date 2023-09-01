#include <iostream>
#include <string>

using namespace std;


int main()
{
	const int ROWS = 7, COLUMNS = 10;
	int parking[ROWS][COLUMNS]{};
	int floor, space, answer = 1, count = 0;
	string str;

	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
			parking[i][j] = j + 1;
	}

	while (answer != 0)
	{
		cout << "~~Table of parking spaces (" << count << " - spaces booked)~~\n" << endl;

		for (int i = 0; i < ROWS; ++i)
		{
			for (int j = 0; j < COLUMNS; ++j)
				if (j == 0)
				{
					switch (i)
					{
					case 0:
						str = "st";
						break;
					case 1:
						str = "nd";
						break;
					case 2:
						str = "rd";
						break;
					default:
						str = "th";
						break;
					}
					cout << i + 1 << str << " floor: " << parking[i][j] << " | ";
				}
				else
					cout << parking[i][j] << " | ";
			cout << endl << "---------------------------------------------------" << endl;
		}

		cout << "To book a parking space, select a floor and an area.\nInput the floor number: ";
		cin >> floor;
		while (floor > 7 || floor < -1) 
		{
			cout << "This floor doesn't exist. Please choose from 1 to 7!\nInput the floor number: ";
			cin >> floor;
		}

		cout << "Input the space number: ";
		cin >> space;
		while (space > 10 || space < -1)
		{
			cout << "This space doesn't exist. Please choose from 1 to 10!\nInput the space number: ";
			cin >> space;
		}

		parking[floor-1][space-1] = 0;
		cout << "\nSpace booked successfully!\nBook more - press 1. Exit 0: ";
		cin >> answer;
	}

	

}