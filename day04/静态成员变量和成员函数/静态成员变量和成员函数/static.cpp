#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person
{
public:
	static int m_age;//����static ���Ǿ�̬��Ա���� ��������
	//��̬��Ա���� ���������� ������г�ʼ��
	
	int get_Others() {
		return m_other;
	}




	Person();
	~Person();

private:
	static int m_other;//˽��Ȩ�� �����ⲻ�ܷ���
	//����Ҳ������������г�ʼ�� 


};
//��������г�ʼ��
int Person::m_age = 0;

//�������ʼ�� ˽�����е�static��Ա����
int Person::m_other = 20;

//
Person::Person()
{
}

Person::~Person()
{
}
void test01() {
	//1��ͨ�������������
	Person p1;
	p1.m_age = 10;

	Person p2;
	//p2.m_age = 20;
	cout << "p1=" << p1.m_age << endl;//��ʱp1 Ҳ��20����ʱ��������
	cout << "p2=" << p2.m_age << endl;
	
	//2��ͨ��������������
	
	cout << "ͨ��������������" << p1.get_Others() << endl;


	//3��ͨ����������˽�г�Ա����
	//˽��Ȩ���������޷�����
	 //cout << "��������˽�б���other" << Person::m_other << endl;
	
}
int main()
{


	test01();
	system("pause");
	return EXIT_SUCCESS;
}