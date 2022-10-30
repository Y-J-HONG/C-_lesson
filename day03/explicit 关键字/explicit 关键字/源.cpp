#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Mystring {
public:
	Mystring(const char* str) {}
	explicit Mystring(int a) { mSize = a; };
	int mSize;
	char* mstr;

};
void test01() {
	Mystring str = "str";
	//Mystring str2 = 10;//用途是什么  str2 字符串为“10” ，字符串长度为10
	//上面这种调用方式为 隐式类型转换  Mystring str2(10);

	//加上explicit 表示不能进行隐式类型转换,此时上面的方法就会报错
	
	Mystring st2(10);


}
int main()
{
	test01();

		

	system("pause");
	return EXIT_SUCCESS;
}