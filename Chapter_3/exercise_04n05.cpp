#include "..\..\std_lib_facilities.h"

int main()
{
	/*for exercise 4 we were required to build solution in int values for val1 and val2 and
	for exercise 5 we were required to replace int type with double type*/
	
	double val1 = 0;
	double val2 = 0;

	cout << "Enter two numbers values separated by space: \n";
	while (cin >> val1 >> val2 )
	{
		
		//If else statement for smaller and larger number conditions
		if (val1 > val2)
			cout << val2 << " is the smaller number and " << val1 << " is the greater number!\n\n";

		else
			cout << val1 << " is smaller and " << val2 << " is greater\n\n";

		cout << "Sum of both numbers is " << val1 + val2 << "\n\n"; //statement for sum of both numbers

		//if else statement for subtraction
		if (val1 > val2)
			cout << "Difference of both numbers is " << val1 - val2 << "\n\n";

		else
			cout << "Difference of both numbers is " << val2 - val1 << "\n\n";

		//Subtraction in order
		cout << "Literal Subtraction of both numbers in order is " << val1 - val2 <<"\n\n";

		cout << "Product of both numbers is " << val1 * val2 << "\n\n"; //statement for multiplication of numbers

		//if else statement for ratio of both numbers
		if (val1 > val2)
			cout << "Ratio of both numbers is " << val1 / val2 << "\n\n";

		else
			cout << "Ratio of both numbers is " << val2 / val1 << "\n\n";
		
	}

	keep_window_open();
	return 0;
}