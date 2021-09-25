#Programming Principles and Practices Using C++ 
##About:
- Welcome! In this Repository, I share my Try this, drills and exercise solutions of the book: ***Programming Principles and Practices using C++ (Bjarne Stroustroup).***

- This is the best book for a complete beginner just starting out in programming with C++. It teaches good practices and coding standards in addition to programming. Stroustroup understands common beginner mistakes and bad practices, and teaches assuming the students do not understand anything about programming and computer science, hence it is one of the best resources to start out with in my opinion.

##Things to make sure of:
- This book is a bit older, hence you need to make sure of a few things. This book recommends ***Visual Studio 2005*** as the IDE, however it quite outdated and you may not be able to find it on the web. For going through this book, I used ***Visual Studio 2019*** for the assignments. As a beginner, I would recommend watching a YouTube tutorial to setup Visual Studio 2019, so that you will be able to understand exactly what is happening and is quite important!
- Firstly, set up the `std_lib_facilities.h` file from Bjarne Stroustroup's website as shown in the book. Make sure you place this folder in ***every file*** that you write your code in. If you are making new directories in an existing one make sure you add `std_lib_facilities.h` in the new one as well, or objects like cin, cout, int etc.. would not be defined!
- Make sure your code starts with `#include "..\..\std_lib_facilities.h"` and not `std_lib_facilities.h`! `..\..\` before filename means `std_lib_facilities.h` file from the path of current directory. 

##General:
- It is very important to try all the exercises on your own and give time to a problem before referring to the solution! If you do not understand my code at time (I have made comments in places I initially faced trouble), you may take help of other sites such as StackOverflow! However make sure you understand every line of code before you go ahead. Do not rush, or follow a deadline. Learn at your own pace!
- I will upload the solutions as I progress through the book! So, the repository as of now is incomplete, and I will complete it at my own pace.

###Try printing this!
```
int main()
{
	char h = 3;
	cout << "I " << h << " programming";

	return 0;
}

```
