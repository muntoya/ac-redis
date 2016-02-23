//
// Created by baidu on 2/22/16.
//

#include <iostream>
#include "Connection.h"

namespace redis {

using namespace boost::asio;
using boost::asio::ip::tcp;

Connection::Connection(io_service &io_service, tcp::resolver::iterator endpoint_iterator)
	: io_service_(io_service)
	, socket_(io_service)
	, endpoint_iterator_(endpoint_iterator)
{
	boost::asio::async_connect(socket_, endpoint_iterator,
		[this](boost::system::error_code ec, tcp::resolver::iterator)
		{
			if (!ec)
			{
				std::cout << "connected" << std::endl;
			} else {
				std::cout << "wrong " << ec << std::endl;
			}

		});
}

}