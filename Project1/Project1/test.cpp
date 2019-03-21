#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>
#include "numbers.h"


BOOST_AUTO_TEST_CASE( test_nums_less_20 ) {
	
	BOOST_TEST_CHECK(numbers_lt_20_to_string(0) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string ("���"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string ("��"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string ("ᥬ�"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string ("��ᥬ�"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string ("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string ("������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string ("����������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string ("���������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string ("�ਭ�����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string ("���ୠ����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string ("��⭠����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string ("��⭠����"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string ("ᥬ������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string ("��ᥬ������"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string ("����⭠����"));

}
	
BOOST_AUTO_TEST_CASE( test_nums_less_100 ) {

	BOOST_TEST_CHECK(numbers_lt_100_to_string(20) == string ("�������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(30) == string ("�ਤ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(40) == string ("�ப"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(50) == string ("���줥���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(60) == string ("���줥���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(70) == string ("ᥬ줥���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(80) == string ("��ᥬ줥���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(91) == string ("���ﭮ�� ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(41) == string ("�ப ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(42) == string ("�ப ���"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(43) == string ("�ப ��"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(44) == string ("�ப ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(45) == string ("�ப ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(46) == string ("�ப ����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(47) == string ("�ப ᥬ�"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(48) == string ("�ப ��ᥬ�"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(49) == string ("�ப ������"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(0) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(1) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_100_to_string(11) == string ("����������"));

}

BOOST_AUTO_TEST_CASE( test_nums_less_1000 ) {

	BOOST_TEST_CHECK(numbers_lt_1000_to_string(1) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(0) == string ("����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(66) == string ("���줥��� ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(400) == string ("������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(237) == string ("����� �ਤ��� ᥬ�"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(689) == string ("������ ��ᥬ줥��� ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(210) == string ("����� ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(205) == string ("����� ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(401) == string ("������ ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(999) == string ("�������� ���ﭮ�� ������"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(100) == string ("��"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(219) == string ("����� ����⭠����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(352) == string ("���� ���줥��� ���"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(501) == string ("������ ����"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(773) == string ("ᥬ��� ᥬ줥��� ��"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(800) == string ("��ᥬ���"));
	BOOST_TEST_CHECK(numbers_lt_1000_to_string(111) == string ("�� ����������"));

}

BOOST_AUTO_TEST_CASE( test_objs_less_1000 ) {

	BOOST_TEST_CHECK(objects_less_1000_to_string(101, "�㡫�", "�㡫�", "�㡫��") == string ("�� ���� �㡫�"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(102, "�㡫�", "�㡫�", "�㡫��") == string ("�� ��� �㡫�"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(999, "�㡫�", "�㡫�", "�㡫��") == string ("�������� ���ﭮ�� ������ �㡫��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(222, "�㡫�", "�㡫�", "�㡫��") == string ("����� ������� ��� �㡫�"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(514, "�㡫�", "�㡫�", "�㡫��") == string ("������ ���ୠ���� �㡫��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(780, "�㡫�", "�㡫�", "�㡫��") == string ("ᥬ��� ��ᥬ줥��� �㡫��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(205, "�㡫�", "�㡫�", "�㡫��") == string ("����� ���� �㡫��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(1, "��஡��", "��஡��", "��஡��") == string ("���� ��஡��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(2, "��஡��", "��஡��", "��஡��") == string ("��� ��஡��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(6, "��஡��", "��஡��", "��஡��") == string ("���� ��஡��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(11, "�㡫�", "�㡫�", "�㡫��") == string ("���������� �㡫��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(13, "�㡫�", "�㡫�", "�㡫��") == string ("�ਭ����� �㡫��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(20, "�㡫�", "�㡫�", "�㡫��") == string ("������� �㡫��"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(21, "�㡫�", "�㡫�", "�㡫��") == string ("������� ���� �㡫�"));
	BOOST_TEST_CHECK(objects_less_1000_to_string(22, "�㡫�", "�㡫�", "�㡫��") == string ("������� ��� �㡫�"));

}

BOOST_AUTO_TEST_CASE( test_curr_less_1000 ) {

	BOOST_TEST_CHECK(currency_to_string(101, "�㡫�", "�㡫�", "�㡫��", 13, "�������", "�������", "������") == string ("�� ���� �㡫�, �ਭ����� ������"));
	BOOST_TEST_CHECK(currency_to_string(101, "�㡫�", "�㡫�", "�㡫��", 1, "�������", "�������", "������") == string ("�� ���� �㡫�, ���� �������"));
	BOOST_TEST_CHECK(currency_to_string(101, "�㡫�", "�㡫�", "�㡫��", 50, "�������", "�������", "������") == string ("�� ���� �㡫�, ���줥��� ������"));

}






#endif