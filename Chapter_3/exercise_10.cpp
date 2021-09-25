// program to perform operation after entering operator followed by two numbers.
#include "..\..\std_lib_facilities.h"

int main()
{
	string operation;
	double oper1 =0;
	double oper2 = 0;
	double result = 0;

	cout << "Enter an operation (+, -, *, /) followed by two numbers separated by spaces!\n"
		<< "Enter (Ctrl + Z) followed by Enter when you want to exit!\n";

	while (cin >> operation >> oper1 >> oper2)
	{
		
		//here I learnt '||' means either or both! It is called the 'logical OR' operator
		
		if (operation == "+" || operation == "plus")
			result = oper1 + oper2;

		/* Here the mistake I made was that I wrote [if (operation == "+", "plus")] instead of writing 
		[if (operation == "+" || operation == "plus")] both times on either side of ||. As a result the 
		program was just doing addition and no other operation! Lesson: Always pay attention to logic 
		and syntax: what is allowed and makes sense and what is not*/
		
		else if (operation == "-" || operation == "minus")
			result = oper1 - oper2;

		else if (operation == "*" || operation == "mul")
			result = oper1 * oper2;

		else if (operation == "/" || operation == "div")
			result = oper1 / oper2;

		cout << "The required answer is " << result << "\n\n";
	}
	
	keep_window_open();
	return 0;
}