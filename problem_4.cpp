/*
 _                                   ___ 
| |                                 /   |
| |     ___  ___ ___  ___  _ __    / /| |
| |    / _ \/ __/ __|/ _ \| '_ \  / /_| |
| |___|  __/\__ \__ \ (_) | | | | \___  |
\_____/\___||___/___/\___/|_| |_|     |_/

[Control Flow & Branching]
-----------------------------------------
-> if, else, else if, switch statements
-> for, while, do while loops
-> return, continue, break, goto keywords
-> Recursion

*/

#include <iostream>

using namespace std;

// Recursive Functions
int fib(const int x)
{
	if (x <= 1) 
		return x;

	return fib(x - 1) + fib(x - 2);
}

int main(int argc, char* argv[])
{
	// 1) Branches & Conditional Statements
	//
	//



	// We can also use curly braces to group a block of statements
	//
	//



	// 2) A switch statement is just a fancy way of grouping if, else if statements...
	//
	//



	// 3) There are 3 main types of loops in C/C++ (for, do, and do while)
	//
	//



	// We can also "break" out of loops if a condition is met
	//
	//



	// 4) While goto statements are frowned upon, they are a valid part of the language
	//
	//



	// Recursion!
	//
	//



	// BONUS MATERIAL
	// There is also a cool trick that you can use to avoid a goto statement:
	//
	//


	return 0;
}