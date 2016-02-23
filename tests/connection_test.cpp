//
// Created by baidu on 2/23/16.
//

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include "Connection.h"

using namespace redis;
using namespace boost;
using namespace boost::asio;
using boost::asio::ip::tcp;

struct ConnFixture
{
	ConnFixture()
	{
		tcp::resolver resolver(io_service_);
		endpoint_iterator_ = resolver.resolve({"127.0.0.1", "6379"});
	}

	~ConnFixture()
	{}

	boost::asio::io_service io_service_;
	tcp::resolver::iterator endpoint_iterator_;
};

BOOST_FIXTURE_TEST_SUITE(test_connection, ConnFixture)

BOOST_AUTO_TEST_CASE(case_connect)
{
	Connection conn(io_service_, endpoint_iterator_);
}

BOOST_AUTO_TEST_SUITE_END()
