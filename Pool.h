//
// Created by baidu on 2/22/16.
//

#ifndef AC_REDIS_POOL_H
#define AC_REDIS_POOL_H


#include <memory>
#include <vector>
#include <boost/asio.hpp>
#include "def.h"
#include "Connection.h"


namespace redis {

using conns_t = std::vector<std::unique_ptr<Connection>>;


class Pool
{
public:
	Pool(boost::asio::io_service& io_service,
		boost::asio::ip::tcp::resolver::iterator endpoint_iterator)
	    : io_service_(io_service),
	      socket_(io_service)
	{

	}

private:
	boost::asio::io_service& io_service_;
	boost::asio::ip::tcp::socket socket_;

	conns_t conns;
};

}

#endif //AC_REDIS_POOL_H
