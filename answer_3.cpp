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

// My user-defined type (struct)
struct my_data
{
	int count;
	char initial;
	float amount;
};

class my_class
{
private:
	int m_count;
	char m_initial;
	float m_amount;

public:
	my_class() : m_count(0), m_initial(' '), m_amount(0) { }

	// Operators
	friend std::ostream& operator<<(std::ostream& os, const my_class& value) { return os << value.get_initial(); }

	// Set
	void set_count(const int count) { m_count = count; }
	void set_initial(const char initial) { m_initial = initial; }
	void set_amount(const float amount) { m_amount = amount; }

	// Get
	int get_count() const { return m_count; }
	char get_initial() const { return m_initial; }
	float get_amount() const { return m_amount; }
};

int main(int argc, char* argv[])
{
	// 1) User-Defined/Compound Types (structs, classes)
	std::string str = "This is a C++ standard class!";

	my_data data1;
	data1.amount = 37.93;
	data1.count = 4;
	data1.initial = 'u';

	my_data data2 = { 4, 'u', 37.93 };
	std::cout << "0x" << &data2 << ", " << data2.initial << std::endl;


	// 2) A class is just like a struct expect with a coupel minor differences...
	// * Structs have default public members and bases and classes have default private members and bases.
	// Let's make a class!
	// Let's make a class in a header (*.h or *.hpp) and source (*.cpp) file!
	my_class mc1;
	mc1.set_initial('E');
	std::cout << "0x" << &mc1 << ", " << mc1 << std::endl;


	// 3) MEMORY - Where is all this stuff stored in memory?
	// -> Stack (per thread)
	// -> Heap (shared)
	// -> Executable (data, static)


	// 4) Dynamically Allocated variables (heap)
	my_class* mc2 = new my_class;
	mc2->set_initial('J');
	std::cout << "0x" << mc2 << ", " << *mc2 << std::endl;
	delete mc2;


	// 5) Dynamic stack allocation
	void* p = alloca(sizeof(my_class));
	my_class* mc3 = new(p) my_class;
	mc3->set_initial('A');
	std::cout << "0x" << mc3 << ", " << *mc3 << std::endl;
	//delete mc2;


	// 6) References vs Pointers
	// http://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in
	// Basically... a refernce is direct access to the memory of a variable, and cannot be re-assigned
	// A pointer, is a 4 or 8 byte variable that holds the address (or points to) a memory address
	void* p1 = &mc1;
	std::cout << "p1 = " << p1 << std::endl;

	const my_class& r1 = mc1;
	std::cout << "r1 = " << &r1 << ", " << r1 << std::endl;


	// 7) BONUS MATERIAL
	// Endianness
	// Wikipedia: "Endianness refers to the order of the bytes comprising a digital word in computer memory."
	// Simple: This just refers to the order of bytes for a multi-byte variable (int, long, etc)
	// Big Endian:    00x...1...2...3...0xFF  (higher memory)
	// Little Endian: 00x...3...2...1...0xFF  (higher memory)

	return 0;
}