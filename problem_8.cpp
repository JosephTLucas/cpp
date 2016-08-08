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
	//
	//



	// 2) Use a switch to easily figure out which hash to use
	//
	//



	// 3) Now perform the cryptographic hash
	//
	//



	// 4) Now convert this into hex so we can read it
	//
	//



	// BONUS MATERIAL
	// Add a salt option to our hash
	// Modify the program to support encryption & decryption using AES!
	//
	//



	return 0;
}