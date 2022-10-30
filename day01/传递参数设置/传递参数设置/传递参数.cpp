#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void swap1(int a, int b) {
	int temp = a;
	 a = b;
	 b = temp;
	cout << "myswap a" << a << endl;
	cout << "myswap b" << b << endl;
}
//此时传递不成功
void test1() {

	int c = 10;
	int d = 20;
	swap1(c, d);
	cout << " c=" << c << endl;
	cout << " d=" << d << endl;
}

//使用地址进行传递
void swap1(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "myswap a" << *a << endl;
	cout << "myswap b" << *b << endl;
}

void test2() {

	int c = 10;
	int d = 20;
	swap1(&c, &d);
	cout << " c=" << c << endl;
	cout << " d=" << d << endl;
}
//使用引用传递 采用取别名的方式进行传递
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "myswap a" << a << endl;
	cout << "myswap b" << b << endl;
}

void test3() {

	int c = 10;
	int d = 20;
	swap3(c, d);
	cout << " c=" << c << endl;
	cout << " d=" << d << endl;
}

// 引用的注意事项
//1、应用必须是一块合法的内存空间
//2、不要返回局部变量的引用
void test4()
{
	//int& a = 109;//报错
}

int& dowork() {
	int a = 19;
	return a;
}
void test5() {
	int& ret = dowork();
	cout << "ret" << ret << endl;//第一次10是做了优化
	cout << "ret" << ret << endl; 
	cout << "ret" << ret << endl; 
	cout << "ret" << ret << endl; 

}


int& dowork1() {
	static int a = 19;
	return a;
}
void test6() {
	int& ret = dowork1();
	cout << "ret" << ret << endl;//第一次10是做了优化
	cout << "ret" << ret << endl;
	cout << "ret" << ret << endl;
	cout << "ret" << ret << endl;
}
//如果函数的返回值是引用可以作为左值进行操作
int main()
{
	test5();


	system("pause");
	return EXIT_SUCCESS;
}