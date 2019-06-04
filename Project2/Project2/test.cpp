#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>
#include "genpoints.h"


BOOST_AUTO_TEST_SUITE( suite1 )

BOOST_AUTO_TEST_CASE( case1_genp_square ) {
	BOOST_TEST_CHECK(check(generate_points_in_square(100, 10)) == bool(true));
}

BOOST_AUTO_TEST_CASE( case2_genp_circle ) {
	BOOST_TEST_CHECK(check(generate_points_in_circle(100, 10)) == bool(true));
}

BOOST_AUTO_TEST_CASE( case3_genp_triangle ) {
	BOOST_TEST_CHECK(check(generate_points_in_triangle(100, 10, 10)) == bool(true));
}

BOOST_AUTO_TEST_SUITE_END()


#endif