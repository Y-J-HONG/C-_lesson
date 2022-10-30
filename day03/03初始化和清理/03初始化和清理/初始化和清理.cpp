#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class person {
public:
	//构造函数的写法
	person()
	{
		cout << "this is the construct function" << endl;
	}
	person(int a) {
		cout << "this is the construct function "<<a << endl;
	}


	//析构函数的声明
	~person() {
		cout << "构造函数的初始化" << endl;
	}
};

void test01() {
	person p(1);//默认调用的析构函数和构造函数是系统提供的两个空函数实现的


}
int main()
{
	person p2;

	test01();

	system("pause");
	return EXIT_SUCCESS;
}