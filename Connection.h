//
// Created by baidu on 2/22/16.
//

#ifndef AC_REDIS_CONNECTION_H
#define AC_REDIS_CONNECTION_H


#include <boost/asio.hpp>
#include "def.h"

namespace redis {

class Connection
{
public:
	Connection(boost::asio::io_service &io_service,
		boost::asio::ip::tcp::resolver::iterator endpoint_iterator);

private:
	boost::asio::io_service& io_service_;
	boost::asio::ip::tcp::socket socket_;

	boost::asio::ip::tcp::resolver::iterator endpoint_iterator_;
};

}

#endif //AC_REDIS_CONNECTION_H
