#include <string>
using namespace std;

string numbers_lt_20_to_string(int number) {
	string answer;
	switch (number)
	{
	case 0: 
		answer = "ноль";
		break;
	case 1: 
		answer = "один";
		break;
	case 2:
		answer = "два";
		break;
	case 3: 
		answer = "три";
		break;
	case 4:
		answer = "четыре";
		break;
	case 5: 
		answer = "пять";
		break;
	case 6:
		answer = "шесть";
		break;
	case 7: 
		answer = "семь";
		break;
	case 8:
		answer = "восемь";
		break;
	case 9: 
		answer = "девять";
		break;
	case 10:
		answer = "десять";
		break;
	case 11: 
		answer = "одиннадцать";
		break;
	case 12:
		answer = "двенадцать";
		break;
	case 13: 
		answer = "тринадцать";
		break;
	case 14:
		answer = "четырнадцать";
		break;
	case 15: 
		answer = "пятнадцать";
		break;
	case 16:
		answer = "шестнадцать";
		break;
	case 17: 
		answer = "семнадцать";
		break;
	case 18:
		answer = "восемнадцать";
		break;
	case 19: 
		answer = "девятнадцать";
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
			answer = "двадцать";
			break;
		case 3: 
			answer = "тридцать";
			break;
		case 4:
			answer = "сорок";
			break;
		case 5: 
			answer = "пятьдесят";
			break;
		case 6:
			answer = "шестьдесят";
			break;
		case 7: 
			answer = "семьдесят";
			break;
		case 8:
			answer = "восемьдесят";
			break;
		case 9: 
			answer = "девяносто";
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
			answer = "сто";
			break;
		case 2: 
			answer = "двести";
			break;
		case 3: 
			answer = "тристо";
			break;
		case 4:
			answer = "четыресто";
			break;
		case 5: 
			answer = "пятьсот";
			break;
		case 6:
			answer = "шестьсот";
			break;
		case 7: 
			answer = "семьсот";
			break;
		case 8:
			answer = "восемьсот";
			break;
		case 9: 
			answer = "девятьсот";
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
	if (s1.back() == 'а') {
		if (answer.substr(4) == "один ") {
			answer = "одна ";
		}
		if (answer.substr(3) == "два ") {
			answer = "две "; 
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
