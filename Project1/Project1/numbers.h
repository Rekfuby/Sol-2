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
			answer = "семьдесять";
			break;
		case 8:
			answer = "восемьдесять";
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