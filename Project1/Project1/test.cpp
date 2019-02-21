#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>
#include "numbers.h"


BOOST_AUTO_TEST_CASE( test_case1 ) {
	
	BOOST_TEST_CHECK(numbers_lt_20_to_string(0) == string ("ноль"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string ("один"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string ("два"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string ("три"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string ("четыре"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string ("пять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string ("шесть"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string ("семь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string ("восемь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string ("девять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string ("десять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string ("одиннадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string ("двенадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string ("тринадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string ("четырнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string ("пятнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string ("шестнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string ("семнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string ("восемнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string ("девятнадцать"));

	
	BOOST_TEST_CHECK(numbers_lt_100_to_string(12) == string ("двенадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(30) == string ("тридцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(40) == string ("сорок"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(50) == string ("пятьдесят"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(60) == string ("шестьдесят"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(70) == string ("семьдесять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(80) == string ("восемьдесять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(91) == string ("девяносто один"));

}






#endif