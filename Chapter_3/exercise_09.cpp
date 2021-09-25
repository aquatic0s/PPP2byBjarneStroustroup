#include "..\..\std_lib_facilities.h"

int main()
{
	string textnumbr;
	string diginumbr;

	cout << "Enter a number in words! \n";

	while (cin >> textnumbr)
	{
		if (textnumbr == "zero")
			diginumbr = "0";

		else if (textnumbr == "one")
			diginumbr = "1";

		else if (textnumbr == "two")
			diginumbr = "2";

		else if (textnumbr == "three")
			diginumbr = "3";

		else if (textnumbr == "four")
			diginumbr = "4";

		else
			diginumbr = "not a number I know";

		cout << "The number you have typed is " << diginumbr << "\n\n";

	}

	keep_window_open();
	return 0;
}