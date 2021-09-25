#include "..\..\std_lib_facilities.h"

int main()
{
	cout << "This is the Miles to Kilometers calculator!\n";
	cout << "Enter the number of Miles: \n";
	
	int miles = 0;
	
	while (cin >> miles)
	{
		cout << miles << " miles equal to " << miles * 1.609 << " kilometers.\n\n";
	}

	keep_window_open();
	return 0;
}