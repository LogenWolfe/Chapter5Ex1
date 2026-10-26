// Name: Logen N. Wolfe
// Date: 10/26/2026
// Program: Chapter 5 Exercise 1
// Description: This program will use a loop to display the characters for each ASCII code 32 through 127. 
// It will display 16 characters on each line with one space between characters.

#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to Logen's ASCII Displayer!" << endl;
	for (int count = 0;count <= 127;++count)
	{
		char letter;
		letter = char(count);
		cout << letter;
		if (count % 16 == 0)
			cout << endl;
	}


}
