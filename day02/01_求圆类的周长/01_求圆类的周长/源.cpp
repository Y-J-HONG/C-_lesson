//设计一个类，求圆的周长
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const double pi = 3.14;

class circle {//class表示一个类 
public://公共权限
	int m_r;//成员属性
	//类里面写的函数叫成员函数
	double calculate_C() {
		return 2 * pi * m_r;
	}
	void setR(int r) {
		m_r = r;
	}
};
void test01() {
	//通过类创建圆 
	circle c1;//圆 （对象）
	c1.m_r = 10;
	cout << "c1的周长为" << c1.calculate_C() << endl;


	//通过成员函数来设置 圆的半径
	//成员函数可以修改 成员属性
	c1.setR(20);
	cout << "c1的周长为" << c1.calculate_C() << endl;

}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}