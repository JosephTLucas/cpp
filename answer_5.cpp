/*

_                                 _____
| |                               |  ___|
| |     ___  ___ ___  ___  _ __   |___ \
| |    / _ \/ __/ __|/ _ \| '_ \      \ \
| |___|  __/\__ \__ \ (_) | | | | /\__/ /
\_____/\___||___/___/\___/|_| |_| \____/

[Input & Output]
-----------------------------------------
-> Reading and writing to/from files
-> Command-line access

*/

#include <cassert>
#include <fstream>
#include <iostream>
#include <string>

#include "system/type.h"

using namespace std;

u64 read(const std::string& path, std::string& output)
{
	std::ifstream ifs(path, std::ios::binary | std::ios::in | std::ios::ate);

	if (ifs.good())
	{
		const u64 size = ifs.tellg();
		output.resize(static_cast<size_t>(size));

		ifs.seekg(0, std::ios::beg);
		ifs.read(&output[0], size);
		ifs.close();

		return ifs.gcount();
	}

	return 0;
}

u64 write(const std::string& path, const std::string& data)
{
	u64 status = 0;
	std::ofstream ofs(path, std::ios::binary | std::ios::out | std::ios::ate);

	if (ofs.good())
	{
		const auto offset = ofs.tellp();
		ofs.write(data.c_str(), data.size());
		status = static_cast<u64>(ofs.tellp()) - offset;
		ofs.close();
	}

	return status;
}

int main(int argc, char* argv[])
{
	// 1) Reading parameters from the command-line is easy!
	for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << std::endl;
	std::cout << std::endl;

	// 2) We've been using cout for a while, let's use cin to create a simple loop that will process use input
	// We would like to quit when a 'q' or 'x' is pressed

	std::string last;
	bool active = true;

	while (active)
	{
		std::cout << "defcon: ";

		std::string line;
		getline(std::cin, line);
		if (line.empty())
			continue;

		// Command
		const auto& ch = line[0];

		switch (ch)
		{
		case 'q':
		case 'x':
		{
			active = false;
			break;
		}
		default:
		{
			last = line;
			std::cout << "You entered: " << line << std::endl;
			break;
		}
		}
	}

	// 3) Let's make a file logger in case any of our future programs has errors, etc.
	const auto path = "/defcon/3_bootcamp/defcon.log";
	write(path, last);

	// 4) Now let's read from the file and output the results!
	std::string output;
	read(path, output);
	std::cout << "File Data: " << output << std::endl;

	return 0;
}