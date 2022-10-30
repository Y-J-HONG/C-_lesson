#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class person
{
public:
	person();
	person(int a);
	person(const person& a);
	~person();
	int m_age;

private:

};

person::person()
{
	cout << "默认构造函数" << endl;
}
person::person(int a) {
	cout << "有参数构造函数" << endl;

}
person::~person()
{
	cout << "默认析构函数" << endl;
}
person::person(const person& a) {
	m_age = a.m_age;
	cout << "默认拷贝构造函数" << endl;
}

//2,以值传递方式给函数传参
void dowork(person &p1) {//此时相当于person p1=person（p） 这就会增加开销
	//采用引用 就会节省一份开销

}
//3、以值的方式 返回局部对象
person dowork2() {
	person p1;
	return p1;
}
void test02() {
	person p = dowork2();
	//在debug模式下 进行了两次调用
	//在release 模式下 进行了优化
	//dowork2(p);
	//void dowork (person &p){
	//person p1;//调用默认构造
	//	}_

}
//1、用已经好的对象来初始化新的对象
void test01() {
	person	p1;
	p1.m_age = 10;
	//person p2(p1);
	dowork(p1);
}


int main()
{

	test02();


	system("pause");
	return EXIT_SUCCESS;
}