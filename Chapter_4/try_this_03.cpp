/*Program to execute while loop of ASCII characters and thier respective number separated by a tab character*/

#include "..\..\std_lib_facilities.h"

int main()
{
	char alpha_bet = 97; //97 is the ASCII value of character (a) (small a)!
	
	
	while (alpha_bet <= 122)
	{
		int unicode_no = alpha_bet; //converted char to int (safe conversion)!
		cout << alpha_bet << '\t' << unicode_no << '\n'; // \t is tab character!
		++alpha_bet; //char alpha_bet increases till it reaches value 122. 122 is also ASCII value of (z) (small z)!
	}

	cout << "\n"; // for visual reasons

	keep_window_open();
	return 0;
}