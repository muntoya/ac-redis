//
// Created by baidu on 2/22/16.
//

#include "def.h"
#include "Pool.h"
#include "Connection.h"

namespace redis {

using boost::asio::ip::tcp;

Pool::Pool(uint32_t conn_cnt, tcp::resolver::iterator endpoint_iterator)
{
	for (uint32_t i = 0; i < conn_cnt; ++i) {
		auto conn = std::make_unique(Connection(io_service_, endpoint_iterator));
		conns_.emplace_back(conn);
	}
}

}
