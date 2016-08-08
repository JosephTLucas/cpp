/*

 _                                 ______
| |                               |___  /
| |     ___  ___ ___  ___  _ __      / / 
| |    / _ \/ __/ __|/ _ \| '_ \    / /  
| |___|  __/\__ \__ \ (_) | | | | ./ /   
\_____/\___||___/___/\___/|_| |_| \_/    

[Advanced: Boss Battle]
-----------------------------------------
-> Let’s make a simple Wget program!
-> Threads
-> Exception handling
-> Lambdas

*/

#include <iostream>
#include <thread>

#include <boost/network.hpp>
#include <boost/network/uri.hpp>
#include <boost/network/protocol/http/client.hpp>

#include "system/type.h"

using namespace std;

u16 wget(const std::string& url, std::string& body)
{
	try
	{
		// Request					
		boost::network::http::client::request request(url);
		request << boost::network::header("Connection", "close");

		// Options
		boost::network::http::client::options options;
		options.cache_resolved(true);
		options.follow_redirects(true);
		options.timeout(15);

		// Response
		boost::network::http::client client(options);
		boost::network::http::client::response response = client.get(request);
		
		/*const*/ auto data = response.body();
		body = std::move(data);

		return response.status();
	}
	catch (const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}	

	return 0;
}

int main(int argc, char* argv[])
{
	// 1) Create a command-line input interface that accepts a URL
	//
	//



	// 2) For fun, let's spawn a worker thread and wait for the HTTP request to complete (lambdas are cool!)
	//
	//



	// 3) Once the data is read in, save it out to a file on your hard drive. Does it open in firefox?
	//
	//


	
	// 4) BONUS MATERIAL
	// Modify this program to request input in a loop
	// Input a URL, then spawn a thread which retrieves the webpage and saves it out with the proper filename & extension
	//
	//



	return 0;
}