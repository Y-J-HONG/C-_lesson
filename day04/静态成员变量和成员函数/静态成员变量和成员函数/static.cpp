#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	static int m_age;//加入static 就是静态成员变量 共享数据
	//静态成员变量 在类内声明 类外进行初始化
	
	int get_Others() {
		return m_other;
	}




	Person();
	~Person();

private:
	static int m_other;//私有权限 在类外不能访问
	//但是也可以在类外进行初始化 


};
//在类外进行初始化
int Person::m_age = 0;

//在类外初始化 私有类中的static成员变量
int Person::m_other = 20;

//
Person::Person()
{
}

Person::~Person()
{
}
void test01() {
	//1、通过对象访问属性
	Person p1;
	p1.m_age = 10;

	Person p2;
	//p2.m_age = 20;
	cout << "p1=" << p1.m_age << endl;//此时p1 也是20；此时共享数据
	cout << "p2=" << p2.m_age << endl;
	
	//2、通过类名访问属性
	
	cout << "通过类名访问属性" << p1.get_Others() << endl;


	//3、通过类名访问私有成员变量
	//私有权限在类外无法访问
	 //cout << "类名访问私有变量other" << Person::m_other << endl;
	
}
int main()
{


	test01();
	system("pause");
	return EXIT_SUCCESS;
}