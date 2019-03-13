#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;




class Point  {
	int x, y;
	Point(int x, int y);
};


class Map {
private:
	vector <Point> points;
	int seed;
public:
	Map();
	Map(int seed);
	
	void generate(int x, int dx, int y, int dy) {
		
	}



};


void main() {

	int seed = 0;
	srand(seed);
	for (int i = 0 ; i < 100; i++) {

		cout << rand() << " ";
	}
}