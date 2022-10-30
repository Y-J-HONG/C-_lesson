#pragma once
#include"БъЭЗ.h"

class circle {
private:
	point center;
	double r;
public:
	void setR(double R);
	double getR();
	void setCenter(point p);
	point getCenter();

	void isInCircle(point& p);
};