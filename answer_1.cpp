/*
_                                 __
| |                               /  |
| |     ___  ___ ___  ___  _ __   `| |
| |    / _ \/ __/ __|/ _ \| '_ \   | |
| |___|  __/\__ \__ \ (_) | | | | _| |_
\_____/\___||___/___/\___/|_| |_| \___/

[Hello Hacker World]
-----------------------------------------
-> Our first C/C++ program
-> Standard Template Library (STL)
-> Files & Program Structure
-> What happens when we compile, build, link?
-> Legality: GPL vs. LGPL licensing

*/

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	// 1) Print out Hello Hacker World!
	std::cout << "Hello Hacker World!" << std::endl;

	// 2) Too much to type! Can we get rid of the namespaces?	
	//
	//
	std::string str = "Eijah is here...";
	std::cout << str << std::endl;

	// 3) Still too much to type! Can we get rid of the variables?
	//
	//
	auto str2 = "Hello DEF CON World!";
	std::cout << str2 << std::endl;

	return 0;
}