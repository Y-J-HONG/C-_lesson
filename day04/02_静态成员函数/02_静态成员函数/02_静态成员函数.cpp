#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class  Person
{
public:
	static int m_Age;
	int m_A;
	//静态成员函数不可以访问 普通成员变量
	//可以访问静态成员变量
	static void func() {
		//m_A = 10;//此时报错  静态成员函数不能引用非静态成员变量
		cout << "静态成员函数" << endl;
		//此时访问静态成员变量 
		m_Age = 520;
	}
	//此时为普通成员变量  不仅可以访问普通成员变量 同时也可以访问静态成员变量
	void myfunc() {
		m_Age = 100;
		m_A = 50;

	}

	

private:
	static int m_Other;

};
int Person::m_Age = 10;
int Person::m_Other = 20;

void test01() {
	Person p1;
	p1.m_Age = 20;

	//1、通过对象 调用静态成员函数
	p1.func();

	cout <<"P1 的m_Age" << p1.m_Age << endl;
	
	//2、通过类名访问成员函数
	Person::func();


}
int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}