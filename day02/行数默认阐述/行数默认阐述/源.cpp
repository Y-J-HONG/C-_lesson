#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void func(int a, int b = 10, int c = 10) {//加上了默认参数 
	//函数参数注意事项 如果一个位置有了默认参数，那么从这个位置开始 从左往右必须要有默认参数
	//传入参数  有参数就用传入的参数 如果没有参数值 ，就用默认值 
	cout << "a+b=" << a + b << endl;
}
void test01() {
	func(1);
}
//函数 占位参数
//如果有了占位参数 函数使用的时候必须提供这个参数 但是在函数内部没有用到
//没有什么大用途 在重载时会用到
//占位参数也可以有默认值 int =1
void func2(int a, int=1) {

}

//如果函数声明中有了默认参数 那么函数实现中必须没有
void func3(int a=10, int b=10);
void func3(int a = 10, int b = 10) {};
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}