#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void test1() {
	//int& ref = 10;//引用了不合法的内存
	const int& ref = 10;//相当于int temp=10 const &ref =tmp
	int* p =(int *) & ref;
	*p = 1000;
	cout << "ref" << ref << endl;
}

//常量引用的场景通常来修饰形参
void showvalue(const int& val) {
	//val += 1000;//如果只是想显示内容 不修改内容就用const修饰
	cout << "a=" << val << endl;

}
int main()
{

	test1();

	system("pause");
	return EXIT_SUCCESS;
}