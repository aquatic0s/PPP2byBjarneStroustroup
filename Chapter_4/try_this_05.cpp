#include "../../std_lib_facilities.h"

// Implement a squaring function without using multiplication. Use this
// function to print all values from 0-99 and their square, separated by a tab
// character.

int archaic_square(int v) 

{
    int total = 0;

    for (int i = 0; i < v; ++i) //this loop will repeat v times (until i is less than v; keep increasing i)
    {
        total += v; 
        /*Let us take the example of v = 5. So variable 'i' (which is in the for loop) will keep incrementing by 1 if value is less than 5.
    So loop will repeat 5 times. So each time loop repeats the new value of total will become
    total = (total +5). This process will repeat 5 times. As value of the variable total is zero, the final value of total will be:
    (total + 5) + (total + 5) + (total + 5) + (total + 5) + (total + 5).
    [Since total value is 0, 5 is getting added 5 times, which is 25 which is 5 times 5]
    Hence, this loop is doing multiplication.*/
    }

    return total;
}

int main()
{
    for (int i = 0; i < 100; ++i) {
        cout << i << '\t' << archaic_square(i) << '\n';
    }

    keep_window_open();
    return 0;
}