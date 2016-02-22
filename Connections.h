//
// Created by baidu on 2/22/16.
//

#ifndef AC_REDIS_CONNECTIONS_H
#define AC_REDIS_CONNECTIONS_H

#include <boost/asio.hpp>
#include "def.h"

NAMESPACE_REDIS_BEGIN



class Connections
{
public:
	Connections(boost::asio::io_service& io_service,
		boost::asio::ip::tcp::resolver::iterator endpoint_iterator)
	    : io_service_(io_service),
	      socket_(io_service)
	{

	}

private:
	boost::asio::io_service& io_service_;
	boost::asio::ip::tcp::socket socket_;
};

NAMESPACE_REDIS_END

#endif //AC_REDIS_CONNECTIONS_H
