#include "..\..\std_lib_facilities.h"

int main()
{
    /*MY MISTAKE:
    *
    char alpha_bet = 97;
    This line, although not wrong is unsafe. As we are giving int value to char. This is where I messed up originally,
    although my code compiled correctly. If my code was to be edited in the future for even larger values, it could have shown
    error!*/

    cout << "For small alphabets: \n\n"; //for visual reasons
    
    char alpha_bet = 'a';

    //for loop for small alphabets
    for (int i = 'a'; i <= 'z'; ++i)
    {
        alpha_bet = i;

        /*as in the code, i value is incrementing every step of the loop. So alpha_bet value should also increase
        each time i increases*/

        cout << alpha_bet << '\t' << i << '\n';
    }

    cout << '\n'
         << "For capital alphabets: \n\n"; //for visual reasons

    //for loop for capital alphabets
    for (int i = 'A'; i <= 'Z'; ++i) {
        alpha_bet = i;
        cout << alpha_bet << '\t' << i << '\n';
    }

    cout << '\n'
         << "For digits: \n\n"; //for visual reasons


    //for loop for digits
    for (int i = '0'; i <= '9'; ++i) {
        alpha_bet = i;
        cout << alpha_bet << '\t' << i << '\n';
    }

    cout << "\n"; //for visual reasons

    keep_window_open();
    return 0;
}