#include "..\..\std_lib_facilities.h"

int main()
{
	int peni =0, nick =0, dim =0, quart = 0, halfd = 0, doll =0; 

	cout << "This is the cash calculator! Enter what you have of each and check your total cash count in dollars!\n\n";
	cout << "How many pennies do you have?\n";
	cin >> peni;
	
	cout << "How many nickels do you have?\n";
	cin >> nick;
	
	cout << "How many dimes do you have?\n";
	cin >> dim;

	cout << "How many quarters do you have?\n";
	cin >> quart;
	
	cout << "How many half dollars do you have?\n";
	cin >> halfd;
	
	cout << "How many one dollar bills do you have?\n";
	cin >> doll;

	if (peni == 1)
		cout << "You have " << peni << " penny\n";
	else
		cout << "You have " << peni << " pennies\n";

	if (nick == 1)
		cout << "You have " << nick << " nickel\n";
	else
		cout << "You have " << nick << " nickels\n";

	if (dim == 1)
		cout << "You have " << dim << " dime\n";
	else
		cout << "You have " << dim << " dimes\n";

	if (quart == 1)
		cout << "You have " << quart << " quarter\n";
	else
		cout << "You have " << quart << " quarters\n";

	if (halfd == 1)
		cout << "You have " << halfd << " half dollar\n";
	else
		cout << "You have " << halfd << " half dollars\n";

	if (doll == 1)
		cout << "You have " << doll << " dollar\n";
	else
		cout << "You have " << doll << " dollars\n";

	/*Here I have used a safe conversion to convert int values that I had obtained into double values,
	as I have to divide all of them to convert into dollar and then get the total dollar count in 
	decimals. I cannot divide int values to get answer in floating point numbers. (The variable type 
	determines what kind of operations can be done and the results obtained). Dividing int values to 
	convert them into dollars will always give me a non decimal answer, EVEN IF I HAVE CONVERTED BAL 
	INTO DOUBLE!!*/
	
	double peni2 = peni, nick2 = nick, dim2 = dim, quart2 = quart, halfd2 = halfd, doll2 = doll;
	double bal =0; //to calculate the total balance in dollars!
	bal = peni2 / 100 + nick2 / 20 + dim2 / 10 + quart2 / 4 + halfd2 / 2 + doll2;

	cout << "In total, you have $" << bal << "!\n\n";


	keep_window_open();
	return 0;
}