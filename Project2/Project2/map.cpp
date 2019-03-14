#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;




class Point  {
private:
	int x, y;

public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}

	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void setX(int _x) {
		x = _x;
	}
	void setY(int _y) {
		y = _y;
	}
};


class Map {
private:

	vector <Point> points;
	int length, width, length1, width1, length2, width2, length3, width3, length4, width4;
	int K;
	
public:

	Map() {
		srand(time(NULL));
	}

	Map(int seed) {
		srand(seed);
	}

	void generate(int x, int dx, int y, int dy) {
		K = 2;
		length = rand() % (2 * dx) + x - dx + 1;
		width = rand() % (2 * dy) + y - dy + 1;
		length1 = rand() % dx * 2 / K + 1;
		width1 = rand() % dy * 2 / K + 1;
		length2 = rand() % dx * 2 / K + 1;
		width2 = rand() % dy * 2 / K + 1;
		length3 = rand() % dx * 2 / K + 1;
		width3 = rand() % dy * 2 / K + 1;
		length4 = rand() % dx * 2 / K + 1;
		width4 = rand() % dy * 2 / K + 1;
	}
	
	int getLength() {
		return length;
	}

	void getLs () {
		cout << length1 << " " << length2 << " " << length3 << " " << length4 << " ";
	}

	int getWidth() {
		return width;
	}

	void getWs () {
		cout << width1 << " " << width2 << " " << width3 << " " << width4 << " ";
	}
};


void main() {
	Map a = *new Map();
	a.generate(100, 10, 50, 5);
	cout << a.getLength() << " " << a.getWidth() << endl;
	a.getLs();
	a.getWs();
}