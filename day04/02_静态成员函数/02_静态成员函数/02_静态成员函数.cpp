#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class  Person
{
public:
	static int m_Age;
	int m_A;
	//��̬��Ա���������Է��� ��ͨ��Ա����
	//���Է��ʾ�̬��Ա����
	static void func() {
		//m_A = 10;//��ʱ����  ��̬��Ա�����������÷Ǿ�̬��Ա����
		cout << "��̬��Ա����" << endl;
		//��ʱ���ʾ�̬��Ա���� 
		m_Age = 520;
	}
	//��ʱΪ��ͨ��Ա����  �������Է�����ͨ��Ա���� ͬʱҲ���Է��ʾ�̬��Ա����
	void myfunc() {
		m_Age = 100;
		m_A = 50;

	}

	

private:
	static int m_Other;

};
int Person::m_Age = 10;
int Person::m_Other = 20;

void test01() {
	Person p1;
	p1.m_Age = 20;

	//1��ͨ������ ���þ�̬��Ա����
	p1.func();

	cout <<"P1 ��m_Age" << p1.m_Age << endl;
	
	//2��ͨ���������ʳ�Ա����
	Person::func();


}
int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}