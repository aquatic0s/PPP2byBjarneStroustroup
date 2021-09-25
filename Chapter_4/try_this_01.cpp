#include "..\..\std_lib_facilities.h"

/*1 Yen = 0.0091 USD; 1 Kroner = 0.12 USD; 1 pound = 1.38 USD*/

int main()
{
	constexpr double yen_to_usd = 0.0091; 

	constexpr double kron_to_usd = 0.12;

	constexpr double pound_to_usd = 1.38;

	cout << "Enter the amount in your chosen currency (Yen, Krone or Pound) followed by it's abbreviation:\n"
		 << "(Yen = JPY, Krone = NOK, Pound = GBP)\n";

	double amount = 0;
	string unit = "????";

	while (cin >> amount >> unit)
	{
		if (unit == "JPY")
			cout << "The amount in US Dollars is " << amount * yen_to_usd << " USD!\n\n";

		else if (unit == "NOK")
			cout << "The amount in US Dollars is " << amount * kron_to_usd << " USD!\n\n";

		else if (unit == "GBP")
			cout << "The amount in US Dollars is " << amount * pound_to_usd << " USD!\n\n";

		else cout << "Cannot recognize this abbreviation for currency!\n\n";
	}

	keep_window_open();
	return 0;
}