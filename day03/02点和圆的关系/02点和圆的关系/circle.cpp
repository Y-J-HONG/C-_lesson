#include "circle.h"

void circle::setR(double R) {
	r = R;
}
double circle::getR() {
	return r;
}
void circle::setCenter(point p) {
	center = p;
}
point circle::getCenter() {
	return center;
}

void circle::isInCircle(point& p) {
	double distance = pow((getCenter().getx() - p.getx()), 2) + pow((getCenter().gety() - p.gety()), 2);
	if (pow(getR(), 2) > distance) {
		cout << "点在圆内" << endl;
	}
	else if (pow(getR(), 2) == distance) {
		cout << "点在圆上" << endl;
	}
	else {
		cout << "点在圆外" << endl;
	}
}