#include "..\..\std_lib_facilities.h"

int main()
{

	cout << "Enter a random integer and find out whether it is odd or even!\n";
	int Oddeven = 0;

	while (cin >> Oddeven)
	{
		if (Oddeven == 0)
			cout << "The integer is neither even nor odd\n\n";

		else if (Oddeven % 2 == 0)
			cout << "The number " << Oddeven << " is an even number\n\n";

		else
			cout << "The number " << Oddeven << " is an odd number\n\n";

		cout << "Enter a random integer and find out whether it is odd or even!\n";
	}

	keep_window_open();
	return 0;
}