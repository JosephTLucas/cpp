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

int fib(const int x)
{
	if (x <= 1)
		return x;

	return fib(x - 1) + fib(x - 2);
}

int main(int argc, char* argv[])
{
	// 1) Branches & Conditional Statements
	int number = 7;

	if (number < 7)
		std::cout << "Less than " << number << std::endl;
	else
		std::cout << "Greater than " << number << std::endl;

	// We can also use curly braces to group a block of statements
	if (number == 7)
	{
		number++;
		std::cout << "But... " << number << " isn't equal to " << number - 1 << '?' << std::endl;
	}

	// 2) A switch statement is just a fancy way of grouping if, else if statements...
	char ch = 'b';

	if (ch == 'a')
		std::cout << "It's an A!" << std::endl;
	else if (ch == 'b')
		std::cout << "It's a B!" << std::endl;
	else
		std::cout << "Must be something else!?!?!" << std::endl;

	switch (ch)
	{
	case 'a':
	{
		std::cout << "It's an A!" << std::endl;
		break;
	}
	case 'b':
	{
		std::cout << "It's a B!" << std::endl;
		break;
	}
	default:
	{
		std::cout << "Must be something else!?!?!" << std::endl;
		break;
	}
	}

	// 3) There are 3 main types of loops in C/C++ (for, do, and do while)
	for (int i = 0; i < 3; ++i)
		std::cout << i << ", ";
	std::cout << std::endl;

	int i = 5;
	while (i--)
		std::cout << i << ", ";
	std::cout << std::endl;

	i = 0;
	do
	{
		std::cout << i++ << ", ";
	} while (i < 5);
	std::cout << std::endl;

	// We can also "break" out of loops if a condition is met
	i = 0;

	while (true)
	{
		if (i == 21)
			break;

		std::cout << i++ << ", ";
	}
	std::cout << std::endl;


	// 4) While goto statements are frowned upon, they are a valid part of the language
	for (int i = 0; i < 1000; ++i)
	{
		for (int j = 0; j < 1000; ++j)
		{
			for (int k = 0; k < 1000; ++k)
			{
				if (k == 1)
					goto wtf;
			}
		}
	}

wtf:
	std::cout << "What were we thinking?" << std::endl;

	// Recursion!
	int result = fib(9);
	std::cout << "fib = " << result << std::endl;

	// BONUS MATERIAL
	// There is also a cool trick that you can use to avoid a goto statement:
	do
	{
		int i = 7;

		// Do something

		break;

		// Maybe do something
	} while (0);

	return 0;
}