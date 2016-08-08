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
	//
	//



	// 3) Boost provides threads, socket, binding, and many other libraries some of which are now part of the C++ standard
	//
	//



	// 4) Let's use another 3rd party library to perform an MD cryptographic hash of the string!
	// Demoncrypt is a free, open source wrapper I wrote around a lot of the common cryptographic functions in Crypto++
	//
	//



	// 5) No let's format the hash in hex so that we can better read it
	//
	//



	// 6) Let's compress some data with LZ4, a VERY powerful & fast compression algorithm
	//
	//



	return 0;
}