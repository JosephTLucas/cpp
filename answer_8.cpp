/*

_                                 _____
| |                               |  _  |
| |     ___  ___ ___  ___  _ __    \ V /
| |    / _ \/ __/ __|/ _ \| '_ \   / _ \
| |___|  __/\__ \__ \ (_) | | | | | |_| |
\_____/\___||___/___/\___/|_| |_| \_____/

[Advanced: Boss Battle 2]
-----------------------------------------
-> Let’s make a simple hash program!
-> 3rd Party Library: Crypto++
-> 3rd Party Library: Demoncrypt
-> Command-line input to choose the hash type
-> Templates

*/

#include <iostream>

#include "security/filter/hex.h"
#include "security/hash/hash.h"
#include "security/hash/md.h"
#include "security/hash/sha.h"

using namespace std;

int main(int argc, char* argv[])
{
	// 1) Create a command-line input interface that accepts a URL
	if (argc < 3)
	{
		std::cout << "Input: chp8 <hash_type> <input>" << std::endl;
		exit(-1);
	}

	const auto type = atoi(argv[1]);
	std::cout << "Hash Type: " << type << std::endl;

	const auto input = argv[2];
	std::cout << "Input: " << input << std::endl;

	// 2) Use a switch to easily figure out which hash to use
	eja::hash::ptr hash;

	switch (type)
	{
	case 5:
	{
		hash = eja::md5::create();
		break;
	}
	case 224:
	{
		hash = eja::sha224::create();
		break;
	}
	case 256:
	{
		hash = eja::sha256::create();
		break;
	}
	case 384:
	{
		hash = eja::sha384::create();
		break;
	}
	case 512:
	{
		hash = eja::sha512::create();
		break;
	}
	default:
	{
		std::cerr << "Invalid hash type: " << type << std::endl;
		exit(-1);

		break;
	}
	}

	// 3) Now perform the cryptographic hash
	const auto output = hash->compute(input);
	std::cout << "Raw Output: " << output << std::endl;

	// 4) Now convert this into hex so we can read it
	const auto hex_output = eja::hex::encode(output);
	std::cout << "Hex Output: 0x" << hex_output << std::endl;

	// BONUS MATERIAL
	// Add a salt option to our hash
	// Modify the program to support encryption & decryption using AES!
	//

	return 0;
}