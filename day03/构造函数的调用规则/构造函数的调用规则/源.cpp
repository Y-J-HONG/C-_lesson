#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class MyClass
{
public:
	MyClass(int a);
	MyClass(const MyClass& cla);
	~MyClass();

	int ma;

private:

};
//系统默认提供三个函数 默认构造 拷贝构造 析构函数
//
//当我们提供了有参的构造函数 系统就不会给我们提供默认构造函数了
// 但是系统还会提供默认的拷贝构造函数

void test01() {
	MyClass c1(1);
	c1.ma = 10;
	MyClass c2(c1);//使用默认的拷贝构造
	cout << c2.ma << endl;



}

//如果我们提供了拷贝构造 那么系统就不会提供其他构造了（）
MyClass::MyClass(const MyClass& cla) {
}

MyClass::MyClass(int a)
{	
	cout << "默认构造函数" << endl;
}

MyClass::~MyClass()
{
	cout << "默认析构函数" << endl;
}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}