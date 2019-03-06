#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>
#include "numbers.h"


BOOST_AUTO_TEST_CASE( test_case1 ) {
	
	BOOST_TEST_CHECK(numbers_lt_20_to_string(0) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string ("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string ("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string ("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string ("�����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string ("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string ("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string ("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string ("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string ("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string ("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string ("������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string ("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string ("�����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string ("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string ("������������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string ("������������"));

	
	BOOST_TEST_CHECK(numbers_lt_100_to_string(20) == string ("��������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(30) == string ("��������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(40) == string ("�����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(50) == string ("���������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(60) == string ("����������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(70) == string ("����������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(80) == string ("������������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(91) == string ("��������� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(41) == string ("����� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(42) == string ("����� ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(43) == string ("����� ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(44) == string ("����� ������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(45) == string ("����� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(46) == string ("����� �����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(47) == string ("����� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(48) == string ("����� ������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(49) == string ("����� ������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(0) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(1) == string ("����"));

	BOOST_TEST_CHECK(numbers_lt_1000_to_string(1) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(0) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400) == string ("���������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(237) == string ("������ �������� ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(689) == string ("�������� ������������ ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(210) == string ("������ ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(205) == string ("������ ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(401) == string ("��������� ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(999) == string ("��������� ��������� ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(100) == string ("���"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(219) == string ("������ ������������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(101) == string ("��� ����"));

}






#endif