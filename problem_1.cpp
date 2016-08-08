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

using namespace std;

int main(int argc, char* argv[])
{
	// 1) Print out Hello Hacker World!
	std::cout << "Hello World!" << std::endl;
	//



	// 2) Too much to type! Can we get rid of the namespaces?	
	string str = "Eijah is here...";
	cout << str << endl;
	//



	// 3) Still too much to type! Can we get rid of the variables?
	auto str2 = "asdf";
	cout << str2 << endl;

	//


	return 0;
}
