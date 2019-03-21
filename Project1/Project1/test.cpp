#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>
#include "numbers.h"


BOOST_AUTO_TEST_CASE( test_nums_less_20 ) {
	
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

}
	
BOOST_AUTO_TEST_CASE( test_nums_less_100 ) {

	BOOST_TEST_CHECK(numbers_lt_100_to_string(20) == string ("двадцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(30) == string ("тридцать"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(40) == string ("сорок"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(50) == string ("пятьдесят"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(60) == string ("шестьдесят"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(70) == string ("семьдесят"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(80) == string ("восемьдесят"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(91) == string ("девяносто один"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(41) == string ("сорок один"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(42) == string ("сорок два"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(43) == string ("сорок три"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(44) == string ("сорок четыре"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(45) == string ("сорок пять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(46) == string ("сорок шесть"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(47) == string ("сорок семь"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(48) == string ("сорок восемь"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(49) == string ("сорок девять"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(0) == string ("ноль"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(1) == string ("один"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(11) == string ("одиннадцать"));

}

BOOST_AUTO_TEST_CASE( test_nums_less_1000 ) {

	BOOST_TEST_CHECK(numbers_lt_1000_to_string(1) == string ("один"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(0) == string ("ноль"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(66) == string ("шестьдесят шесть"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400) == string ("четыресто"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(237) == string ("двести тридцать семь"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(689) == string ("шестьсот восемьдесят девять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(210) == string ("двести десять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(205) == string ("двести пять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(401) == string ("четыресто один"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(999) == string ("девятьсот девяносто девять"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(100) == string ("сто"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(219) == string ("двести девятнадцать"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(352) == string ("тристо пятьдесят два"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(501) == string ("пятьсот один"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(773) == string ("семьсот семьдесят три"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(800) == string ("восемьсот"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(111) == string ("сто одиннадцать"));

}

BOOST_AUTO_TEST_CASE( test_objs_less_1000 ) {

	BOOST_TEST_CHECK(objects_less_1000_to_string(101, "рубль", "рубля", "рублей") == string ("сто один рубль"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(102, "рубль", "рубля", "рублей") == string ("сто два рубля"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(999, "рубль", "рубля", "рублей") == string ("девятьсот девяносто девять рублей"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(222, "рубль", "рубля", "рублей") == string ("двести двадцать два рубля"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(514, "рубль", "рубля", "рублей") == string ("пятьсот четырнадцать рублей"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(780, "рубль", "рубля", "рублей") == string ("семьсот восемьдесят рублей"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(205, "рубль", "рубля", "рублей") == string ("двести пять рублей"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(1, "коробка", "коробки", "коробок") == string ("одна коробка"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(2, "коробка", "коробки", "коробок") == string ("две коробки"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(6, "коробка", "коробки", "коробок") == string ("шесть коробок"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(11, "рубль", "рубля", "рублей") == string ("одиннадцать рублей"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(13, "рубль", "рубля", "рублей") == string ("тринадцать рублей"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(20, "рубль", "рубля", "рублей") == string ("двадцать рублей"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(21, "рубль", "рубля", "рублей") == string ("двадцать один рубль"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(22, "рубль", "рубля", "рублей") == string ("двадцать два рубля"));

}

BOOST_AUTO_TEST_CASE( test_curr_less_1000 ) {

	BOOST_TEST_CHECK(currency_to_string(101, "рубль", "рубля", "рублей", 13, "копейка", "копейки", "копеек") == string ("сто один рубль, тринадцать копеек"));
	BOOST_TEST_CHECK(currency_to_string(101, "рубль", "рубля", "рублей", 1, "копейка", "копейки", "копеек") == string ("сто один рубль, одна копейка"));
	BOOST_TEST_CHECK(currency_to_string(101, "рубль", "рубля", "рублей", 50, "копейка", "копейки", "копеек") == string ("сто один рубль, пятьдесят копеек"));

}






#endif