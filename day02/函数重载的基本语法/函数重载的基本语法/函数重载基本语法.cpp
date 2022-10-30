#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//函数重载
//c++中函数名称可以重复
//必须在同一作用域下 函数名称相同
//函数的参数 个数不同 类型不同  或者顺序不同
//函数的返回值可以作为函数重载的条件吗? //答案不可以 因为可以不接受其返回值 所以不能通过返回值来判断

//int func() {//
//	return 0;
//}


void func() {
	cout << "无参数的func" << endl;

}
void func(int a) {
	cout << "有参数的int_func" << endl;
}
void func(double a) {
	cout << "有参数的double_func" << endl;
}
void func(double a,int b) {
	cout << "有参数的double_int_func" << endl;
}
void func(int a,double b) {
	cout << "有参数的int_double_func" << endl;
}

void func2(int a) {

}
void func2(int a,int b=10) {

}
void test02() {
	//func2(10);//这时候就出现了二义性问题
}
//使用引用进行函数重载
void func3(const int& a) {//如果是int &a 则出现不合法内存空间问题 int tmp=10 const int &a=tem;
//加上const以后就解决了
	cout << "const int &a " << a << endl;
}
void func3( int& a) {//如果是int &a 则出现不合法内存空间问题
	//加上const以后就解决了
	cout << " int &a " << a << endl;
}
void test03() {
	func3(10);
}
int main()
{
	test03();
	system("pause");
	return EXIT_SUCCESS;
}