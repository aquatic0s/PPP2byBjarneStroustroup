// simple program to exercise operators
#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Please enter an integer value (n), and another one (d) to divide it with: ";
	int n, d;
	cin >> n;
	cin >> d;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\nn divided by d == " << n/d
		<< "\nremainder of n when divided by d == " << n % d
		<< '\n'; // name for newline (“end of line”) in output

	keep_window_open();
	return 0;
}