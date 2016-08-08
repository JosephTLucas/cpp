/*
 _                                 _____ 
| |                               / __  \
| |     ___  ___ ___  ___  _ __   `' / /'
| |    / _ \/ __/ __|/ _ \| '_ \    / /  
| |___|  __/\__ \__ \ (_) | | | | ./ /___
\_____/\___||___/___/\___/|_| |_| \_____/

[Functions & Program Flow]
-----------------------------------------
-> The structure of a C/C++ program
-> Procedural programming
-> Header & C/CPP files
-> Comments & documentation, a double-edged sword
-> Primitive types
-> Functions

*/

#include <iostream>

#include "system/type.h"

// Example Function (return type, definition, parameters)
int multiply(const int value, const int multiplier)
{
	return value * multiplier;
}

void print_hello()
{
	std::cout << "asdf" << std::endl;
	return;
}
//
//

int main(int argc, char* argv[])
{
	// 1) Headers & Source files (*.h, *.hpp, *.c, *.cpp, *.inl, *.?)
	//
	//



	// 2) Procedural vs. Object-Oriented Programming
	//
	//



	// 3) 4 Fundamental Concepts/Tenents to an Object-Oriented Language
	//	  A P I E
	//
	//



	// 4) Only comment when the code isn't self-explanatory
	//    And... no comments are always better than out-dated/invalid comments
	//    Smart programmers don't need to comment their code. It's self-documenting.



	// 5) Data Types
	// Different computers (aka chipsets) have different default primitive types
	// e.g. 32bit vs 64 bit, etc.
	// This means that we need to be careful when we write code that is meant to be cross-platform
	//
	//



	// 6) Primitive Data Types (simple and foundational)
	//
	//



	// 7) Functions
	// Let's call a function that returns nothing
	//
	//



	// Now let's call a function that takes parmeters & returns a value (STACK in action!)
	//
	//


	
	return 0;
}
