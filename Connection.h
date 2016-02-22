//
// Created by baidu on 2/22/16.
//

#ifndef AC_REDIS_CONNECTION_H
#define AC_REDIS_CONNECTION_H


#include <boost/asio.hpp>
#include "def.h"

NAMESPACE_REDIS_BEGIN

class Connection
{
public:
	Connection(boost::asio::io_service& io_service);

};

NAMESPACE_REDIS_END

#endif //AC_REDIS_CONNECTION_H
