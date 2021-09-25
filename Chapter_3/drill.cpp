// read and write a first name
#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter the name of the person you want to write to: \n"; //takes the name of person to write to
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Dear " << first_name << ",\n"
		<< "  How are you? I am fine. I miss you.\n\n"
		<< "(Enter the name of your other friend)\n";

	string friend_name; //enters name of second friend in the letter
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n\n";

	char friend_sex = 0; //takes the sex of friend
	cout << "(Enter m if male and f if female)\n";
	cin >> friend_sex;
	//asks for a call to friend according to his sex
	if (friend_sex = 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n\n";

	else
		cout << "If you see " << friend_name << " please ask her to call me.\n\n";

	cout << "(Enter the age of the receipient)\n"; //takes age of the receipient of letter
	int age = 0; //created integer age
	cin >> age;
	
	cout << "I hear you just had a birthday and you are " << age << " years old.\n\n";

	//gives message to reader according to their age
	if (age <= 0) simple_error("You're kidding");
	
	if (age > 110) simple_error("You're kidding");

	if (age < 12)
		cout << "Next year you will be " << age + 1 << " years old!\n\n";

	if (age == 17)
		cout << "Next year you will be able to vote!\n\n";

	if (age > 70)
		cout << "I hope you are enjoying retirement!\n\n";


}
