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
//ϵͳĬ���ṩ�������� Ĭ�Ϲ��� �������� ��������
//
//�������ṩ���вεĹ��캯�� ϵͳ�Ͳ���������ṩĬ�Ϲ��캯����
// ����ϵͳ�����ṩĬ�ϵĿ������캯��

void test01() {
	MyClass c1(1);
	c1.ma = 10;
	MyClass c2(c1);//ʹ��Ĭ�ϵĿ�������
	cout << c2.ma << endl;



}

//��������ṩ�˿������� ��ôϵͳ�Ͳ����ṩ���������ˣ���
MyClass::MyClass(const MyClass& cla) {
}

MyClass::MyClass(int a)
{	
	cout << "Ĭ�Ϲ��캯��" << endl;
}

MyClass::~MyClass()
{
	cout << "Ĭ����������" << endl;
}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}