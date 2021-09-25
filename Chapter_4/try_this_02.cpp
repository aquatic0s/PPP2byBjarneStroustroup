#include "..\..\std_lib_facilities.h"

/*Currency converter using switch statement*/

int main()
{
	double amount = 0;
	char unit = 'a';

	cout << "Enter the amount followed by the initial character of your currency: \n"
		 << "(Yen = y, Kroner = k, Pound = p)\n\n";

	//entered the conversions and made them constant expressions; they cannot be changed later!
	constexpr double y_to_usd = 0.0091;
	constexpr double k_to_usd = 0.12;
	constexpr double p_to_usd = 1.38;

	while (cin >> amount >> unit)
	{
		switch (unit) //used a switch statement instead of if statement. It is better to use when comparing cases like this.
		{
		case 'y':
			cout << "The value in US Dollars is " << y_to_usd * amount << " USD!\n\n";
			break;

		case 'k':
			cout << "The value in US Dollars is " << k_to_usd * amount << " USD!\n\n";
			break;

		case 'p':
			cout << "The value in US Dollars is " << p_to_usd * amount << " USD!\n\n";
			break;

		default:
			cout << "I cannot recognize this currency!\n\n"; //default means if the above conditions are not satisfied, this will be printed out!
			break;
		}
	}

	keep_window_open();
	return 0;
}