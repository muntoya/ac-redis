//
// Created by baidu on 2/22/16.
//

#ifndef AC_REDIS_POOL_H
#define AC_REDIS_POOL_H


#include <memory>
#include <vector>
#include <boost/asio.hpp>
#include <boost/utility.hpp>
#include "def.h"
#include "Connection.h"


namespace redis {

using conns_t = std::vector<std::unique_ptr<Connection>>;


class Pool: public boost::noncopyable
{
public:
	Pool(uint32_t conn_cnt, boost::asio::ip::tcp::resolver::iterator endpoint_iterator);

private:
	boost::asio::io_service io_service_;
	conns_t conns_;
};

}

#endif //AC_REDIS_POOL_H
