/*
 _                                 _____ 
| |                               |____ |
| |     ___  ___ ___  ___  _ __       / /
| |    / _ \/ __/ __|/ _ \| '_ \      \ \
| |___|  __/\__ \__ \ (_) | | | | .___/ /
\_____/\___||___/___/\___/|_| |_| \____/ 

[Variables, Operators & Data Types]
-----------------------------------------
-> User-defined types
-> Data type storage: sections, stack, & heap
-> Pointers and references

*/

#include <iostream>

// My user-defined type
//
//

int main(int argc, char* argv[])
{
	// 1) User-Defined/Compound Types (structs, classes)
	//
	//


	
	// 2) A class is just like a struct expect with a coupel minor differences...
	// * Structs have default public members and bases and classes have default private members and bases.
	// Let's make a class!
	// Let's make a class in a header (*.h or *.hpp) and source (*.cpp) file!
	//
	//



	// 3) MEMORY - Where is all this stuff stored in memory?
	// -> Stack (per thread)
	// -> Heap (shared)
	// -> Executable (data, static)
	//
	//



	// 4) Dynamically Allocated variables (heap)
	//
	//



	// 5) Dynamic stack allocation
	//
	//



	// 6) References vs Pointers
	// http://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in
	// Basically... a refernce is direct access to the memory of a variable, and cannot be re-assigned
	// A pointer, is a 4 or 8 byte variable that holds the address (or points to) a memory address
	//
	//



	// 7) BONUS MATERIAL
	// Endianness
	// Wikipedia: "Endianness refers to the order of the bytes comprising a digital word in computer memory."
	// Simple: This just refers to the order of bytes for a multi-byte variable (int, long, etc)
	// Big Endian:    00x...1...2...3...0xFF  (higher memory)
	// Little Endian: 00x...3...2...1...0xFF  (higher memory)
	//
	//


	return 0;
}