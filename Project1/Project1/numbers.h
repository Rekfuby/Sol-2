#include <string>
using namespace std;

string numbers_lt_20_to_string(int number) {
	string answer;
	switch (number)
	{
	case 0: 
		answer = "����";
		break;
	case 1: 
		answer = "����";
		break;
	case 2:
		answer = "���";
		break;
	case 3: 
		answer = "��";
		break;
	case 4:
		answer = "����";
		break;
	case 5: 
		answer = "����";
		break;
	case 6:
		answer = "����";
		break;
	case 7: 
		answer = "ᥬ�";
		break;
	case 8:
		answer = "��ᥬ�";
		break;
	case 9: 
		answer = "������";
		break;
	case 10:
		answer = "������";
		break;
	case 11: 
		answer = "����������";
		break;
	case 12:
		answer = "���������";
		break;
	case 13: 
		answer = "�ਭ�����";
		break;
	case 14:
		answer = "���ୠ����";
		break;
	case 15: 
		answer = "��⭠����";
		break;
	case 16:
		answer = "��⭠����";
		break;
	case 17: 
		answer = "ᥬ������";
		break;
	case 18:
		answer = "��ᥬ������";
		break;
	case 19: 
		answer = "����⭠����";
		break;
	default:
		break;
	}
	return answer;
}


string numbers_lt_100_to_string(int number) {
	string answer;
	int tens = number / 10;
	int remainder = number % 10;
	if (tens != 0 && tens != 1) {
		switch (tens)
		{
		case 2: 
			answer = "�������";
			break;
		case 3: 
			answer = "�ਤ���";
			break;
		case 4:
			answer = "�ப";
			break;
		case 5: 
			answer = "���줥���";
			break;
		case 6:
			answer = "���줥���";
			break;
		case 7: 
			answer = "ᥬ줥���";
			break;
		case 8:
			answer = "��ᥬ줥���";
			break;
		case 9: 
			answer = "���ﭮ��";
			break;
		default:
			break;
		}
		if (remainder != 0) {
			answer += " " + numbers_lt_20_to_string(remainder); 
		}
	}
	else {
		answer = numbers_lt_20_to_string(number);
	}
	return answer;
}


string numbers_lt_1000_to_string(int number) {
	string answer;
	int hundreds = number / 100;
	int tens = number % 100;
	if (hundreds != 0) {
		switch (hundreds) {
		case 1: 
			answer = "��";
			break;
		case 2: 
			answer = "�����";
			break;
		case 3: 
			answer = "����";
			break;
		case 4:
			answer = "������";
			break;
		case 5: 
			answer = "������";
			break;
		case 6:
			answer = "������";
			break;
		case 7: 
			answer = "ᥬ���";
			break;
		case 8:
			answer = "��ᥬ���";
			break;
		case 9: 
			answer = "��������";
			break;
		default:
			break;
		}
		if (tens != 0) {
			answer += " " + numbers_lt_100_to_string(tens);
		}
	}
	else {
		answer = numbers_lt_100_to_string(number);
	}
	return answer;
}


string objects_less_1000_to_string(int number, string s1, string s2, string s3) {
	string answer;
	int remainder100 = number % 100;
	int remainder10 = number % 10;
	answer = numbers_lt_1000_to_string(number) + " ";
	if (s1.back() == '�') {
		if (answer.substr(4) == "���� ") {
			answer = "���� ";
		}
		if (answer.substr(3) == "��� ") {
			answer = "��� "; 
		}
	}
	if (remainder100 != 11 && remainder10 == 1) {
		answer += s1;
		
	}
	else {
		if (!(remainder100 >= 12 && remainder100 <= 14) && remainder10 >= 2 && remainder10 <= 4) {
			answer += s2;
		}
		else {
			answer += s3;
		}
	}
	return answer;
}


string currency_to_string(int integer_value, string si1, string si2, string si3, int decimal_value, string sd1, string sd2, string sd3) {
	string answer;
	answer = objects_less_1000_to_string(integer_value, si1, si2, si3) + ", ";
	answer += objects_less_1000_to_string(decimal_value, sd1, sd2, sd3);
	return answer;
}
