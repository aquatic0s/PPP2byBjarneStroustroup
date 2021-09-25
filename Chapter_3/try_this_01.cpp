#include "..\..\std_lib_facilities.h"
int main() 

{
	cout << "Please enter your name and age:\n";
	string name = "????";
	double age = 0;
	cin >> name >> age;

	cout << "Hello, " << name << "! (Age: " << age << ")\n";
	cout << "Your Age in Months is: " << age*12 <<"!";

	keep_window_open();
	return 0;
}
