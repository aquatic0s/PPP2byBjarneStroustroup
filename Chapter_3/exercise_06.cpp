/*This program taught me how debugging actually feels like for a coder(lol) and the importance
  of being very careful about variables and assignment operators. It also taught me about the 
  '&&' symbol, and also why comments are important (I've made comments for all my mistakes).
  It also teaches one a lot about why readability of code is very important xP */

#include "..\..\std_lib_facilities.h"

int main()
{
	//defined int values as a, b and c
	int a = 0;
	int b = 0;
	int c = 0;

	//defined int values smallest, middlest and largest
	int smallest = 0;
	int middlest = 0;
	int largest = 0;

	/*took input of int values a, band c (And used a while loop, so that this whole program keeps running
	  until terminated using Ctrl + Z + Enter keys) */

	cout << "Enter three numbers separated by spaces and they will get sorted in numerical order!\n"; //prompt for the user

	while (cin >> a >> b >> c)
	{

		//If val1 is the smallest number
		if (a < b && a < c)
		{
			smallest = a;

			/* The HUGE mistake I made was put a = smallest and followed this pattern for the entirity
			 of this project. As a result the end values were 0,0,0 always. Remember that the computer
			 has absolutely no logic of it's own and you have to be very careful with your own xD */

			if (b < c)
			{
				middlest = b;
				largest = c;
			}

			else
			{
				middlest = c;
				largest = b;
			}

		}

		//If b is the smallest number
		else if (b < a && b < c)
		{

			smallest = b;
			if (a < c)
			{
				middlest = a;
				largest = c;
			}

			else
			{
				middlest = c;
				largest = a;
			}

		}

		//If c is the smallest number
		else
		{
			smallest = c;

			if (a < b)
			{
				middlest = a;
				largest = b;
			}

			else
			{
				middlest = b;
				largest = a;
			}
		}

		//prints smallest middle and largest number!
		cout << "Your numbers sorted in increasing order are: \n" 
			 << smallest << ", " << middlest << ", " << largest << ".\n\n"
			 << "Enter three numbers separated by spaces and they will get sorted in numerical order!\n";

		/*Another mistake I made is keep the cout command out of the while loop! So the program
		  will not print anything out!*/
	}
		
	/*One thing to always make sure is keep 'keep_window_open' and return 0 commands outside of
	  the while loop! Otherwise the program will not (or) wrongly incorporate them in the code
	  I had done this mistake in the previous few codes*/
	
	keep_window_open(); // to exit the program by entering a character!
	return 0;
}