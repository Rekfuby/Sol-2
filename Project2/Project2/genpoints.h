#include <vector>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

struct Point {
	double x,y;
};

bool check(vector<Point*> k) {
	int n = k.size();
	bool sim = false;
	vector<Point*>::iterator i;
	vector<Point*>::iterator j;
	for (i = k.begin(); i != k.end() - 1; i++) {
		for (j = i + 1; j != k.end(); j++) {
			if ((*i)->x == (*j)->x && (*i)->y == (*j)->y) {
				sim = true;
			}
		}
	}
	for (i = k.begin(); i != k.end(); i++) {
		cout << (*i)->x << " " << (*i)->y << "\n";
		delete *i;
	}
	cout << endl << endl;
	if (sim) {
		return false;
	}
	else {
		return true;
	}
}

vector<Point*> generate_points_in_square(int n, double a) {
	srand((unsigned)time(0)); 
	vector<Point*> k;
	bool sim;
	Point l;
	for (int _i = 0; _i < n; _i++) {
		l.x = floor((static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / a))) * 100 + 0.5) / 100;
		l.y = floor((static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / a))) * 100 + 0.5) / 100;
		k.push_back(new Point(l));
	}
	do {
		sim = false;
		vector<Point*>::iterator i;
		vector<Point*>::iterator j;
		for (i = k.begin(); i != k.end() - 1; i++) {
			for (j = i + 1; j != k.end(); j++) {
				if ((*i)->x == (*j)->x && (*i)->y == (*j)->y) {
					sim = true;
					l.x = floor((static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / a))) * 100 + 0.5) / 100;
					l.y = floor((static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / a))) * 100 + 0.5) / 100;
					k.push_back(new Point(l));
				}
			}
		}
	} 
	while (sim);
	return k;
}

vector<Point*> generate_points_in_circle(int n, double r) {
	srand((unsigned)time(0));
	vector<Point*> k;
	bool sim;
	double pi2 = 6.283185307179586476925286766559;
	Point l;
	for (int _i = 0; _i < n; _i++) {
		double angle = (((double) rand() / (RAND_MAX)) + 1) * pi2;
		double radius = (static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / (r))));
		l.x = floor((double) (((double) (radius)) * cos(angle)) * 100 + 0.5) / 100;
		l.y = floor((double) (((double) (radius)) * sin(angle)) * 100 + 0.5) / 100;
		k.push_back(new Point(l));
	}
	do {
		sim = false;
		vector<Point*>::iterator i;
		vector<Point*>::iterator j;
		for (i = k.begin(); i != k.end() - 1; i++) {
			for (j = i + 1; j != k.end(); j++) {
				if ((*i)->x == (*j)->x && (*i)->y == (*j)->y) {
					sim = true;
					double angle = (((double) rand() / (RAND_MAX)) + 1) * pi2;
					double radius = (static_cast <double> (rand()) / (static_cast <double> (RAND_MAX / (r))));
					l.x = floor((double) (((double) (radius)) * cos(angle)) * 100 + 0.5) / 100;
					l.y = floor((double) (((double) (radius)) * sin(angle)) * 100 + 0.5) / 100;
					k.push_back(new Point(l));
				}
			}
		}
	} while (sim);
	return k;
}

vector<Point*> generate_points_in_triangle(int n, double a, double b) {
	srand((unsigned)time(0));
	vector<Point*> k;
	bool sim;
	Point l;
	for (int _i = 0; _i < n; _i++) {
		double x = (static_cast <double> (rand()) / (static_cast <double> (RAND_MAX)));
		double y = (static_cast <double> (rand()) / (static_cast <double> (RAND_MAX))) * (1 - x);
		l.x = floor(x * a * 100 + 0.5) / 100;
		l.y = floor(y * b * 100 + 0.5) / 100;
		k.push_back(new Point(l));
	}
	do {
		sim = false;
		vector<Point*>::iterator i;
		vector<Point*>::iterator j;
		for (i = k.begin(); i != k.end() - 1; i++) {
			for (j = i + 1; j != k.end(); j++) {
				if ((*i)->x == (*j)->x && (*i)->y == (*j)->y) {
					sim = true;
					double x = (static_cast <double> (rand()) / (static_cast <double> (RAND_MAX)));
					double y = (static_cast <double> (rand()) / (static_cast <double> (RAND_MAX))) * (1 - x);
					l.x = floor(x * a * 100 + 0.5) / 100;
					l.y = floor(y * b * 100 + 0.5) / 100;
					k.push_back(new Point(l));
				}
			}
		}
	} while (sim);
	return k;
}
