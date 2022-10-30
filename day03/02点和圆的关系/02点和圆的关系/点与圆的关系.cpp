#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "标头.h"
#include "circle.h"
using namespace std;
//点在圆上、点在圆外、点在圆内
//class point {
//private:
//	double x;
//	double y;
//public:
//	void setx(double x1) {
//		x = x1;
//	}
//	void sety(double y1) {
//		y = y1;
//	}
//	double getx() {
//		return x;
//	}
//	double gety() {
//		return y;
//	}
//};
//class circle {
//private:
//	point center;
//	double r;
//public:
//	void setR(double R) {
//		r = R;
//	}
//	double getR() {
//		return r;
//	}
//	void setCenter(point p) {
//		center = p;
//	}
//	point getCenter() {
//		return center;
//	}	
//
//	void isInCircle(point& p) {
//		double distance = pow((getCenter().getx() - p.getx()), 2) + pow((getCenter().gety() - p.gety()), 2);
//		if (pow(getR(), 2) > distance) {
//			cout << "点在圆内" << endl;
//		}
//		else if (pow(getR(), 2) == distance) {
//			cout << "点在圆上" << endl;
//		}
//		else {
//			cout << "点在圆外" << endl;
//		}
//	}
//};

//利用全局函数 判断点和圆的关系
void isInCircle(point& p, circle& c) {
	double distance = pow((c.getCenter().getx() - p.getx()), 2) + pow((c.getCenter().gety() - p.gety()), 2);
	if (pow(c.getR(), 2) > distance) {
		cout << "点在圆内" << endl;
	}
	else if (pow(c.getR(), 2) == distance) {
		cout << "点在圆上" << endl;
	}
	else {
		cout << "点在圆外" << endl;
	}
}
void test01() {
	point p1;
	p1.setx(10);
	p1.sety(20);

	point center;
	center.setx(5);
	center.sety(20);

	circle c1;
	c1.setCenter(center);
	c1.setR(1);

	isInCircle(p1, c1);
	c1.isInCircle(p1);
}
int main()
{

	test01();
	system("pause");
	return EXIT_SUCCESS;
}