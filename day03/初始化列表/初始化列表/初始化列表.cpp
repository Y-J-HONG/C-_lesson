#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class person
{
public:
	person();
	//person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b; 
	//	m_C = c;
	//}
	//初始化列表初始化数据
	person(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}
	~person();
	int m_A;
	int m_B;
	int m_C;

private:

};
void test01() {
	person p1(10, 120, 340);
	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	cout << p1.m_C << endl;
}

person::person()
{
}

person::~person()
{
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}