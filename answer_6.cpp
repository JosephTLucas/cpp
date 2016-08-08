/*

_                                  ____
| |                                / ___|
| |     ___  ___ ___  ___  _ __   / /___
| |    / _ \/ __/ __|/ _ \| '_ \  | ___ \
| |___|  __/\__ \__ \ (_) | | | | | \_/ |
\_____/\___||___/___/\___/|_| |_| \_____/

[Interfacing with External Libraries]
-----------------------------------------
-> Standard Template Library (STL)
-> Boost
-> Crypto++ & Demoncrypt
-> Qt and GUI development
-> C++ 11, 14, 17

*/

#include <iostream>
#include <boost/format.hpp>
#include <boost/algorithm/string.hpp>

#include "security/filter/hex.h"
#include "security/filter/lz4.h"
#include "security/hash/md.h"

using namespace std;

int main(int argc, char* argv[])
{
	// 1) Let's use a 3rd party library to format a string and output that to the screen
	//
	//

	// 2) Boost is a very popular and power library
	int num_of_hacker_friends = 7;
	std::string str = boost::str(boost::format("I have %d hacker friends!") % num_of_hacker_friends);
	std::cout << str << std::endl;

	// 3) Boost provides threads, socket, binding, and many other libraries some of which are now part of the C++ standard
	if (boost::iequals("Eijah", "eijah"))
		std::cout << "Yep, case insensitive equality!" << std::endl;

	if (boost::starts_with("Eijah!", "ei"))
		std::cout << "Yep, starts with ei!" << std::endl;

	if (boost::ends_with("Eijah", "jah?"))
		std::cout << "Yep, starts with jah?" << std::endl;

	std::cout << std::endl;

	// 4) Let's use another 3rd party library to perform an MD cryptographic hash of the string!
	// Demoncrypt is a free, open source wrapper I wrote around a lot of the common cryptographic functions in Crypto++
	const eja::md5::ptr hash = eja::md5::create();
	const std::string hash_output = hash->compute(str);
	std::cout << hash_output << std::endl;

	// 5) No let's format the hash in hex so that we can better read it
	const auto hex_output = eja::hex::encode(hash_output);
	std::cout << "0x" << hex_output << std::endl;
	std::cout << std::endl;

	// 6) Let's compress some data with LZ4, a VERY powerful & fast compression algorithm
	const std::string raw_data =
		"0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\r\n" \
		"1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111\r\n" \
		"2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222\r\n" \
		"3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333\r\n" \
		"4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444\r\n" \
		"5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555\r\n" \
		"6666666666666666666666666666666666666666666666666666666666666666666666666666666666666666\r\n" \
		"7777777777777777777777777777777777777777777777777777777777777777777777777777777777777777\r\n" \
		"8888888888888888888888888888888888888888888888888888888888888888888888888888888888888888\r\n" \
		"9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999\r\n";

	std::cout << "Raw Size = " << raw_data.size() << std::endl;

	const auto compressed_data = eja::lz4::encode(raw_data);
	std::cout << "Compressed Size = " << compressed_data.size() << std::endl;

	const auto decompressed_data = eja::lz4::decode(compressed_data);
	std::cout << "De-Compressed Size = " << decompressed_data.size() << std::endl;

	assert(raw_data == decompressed_data);

	std::cout << decompressed_data << std::endl;

	return 0;
}