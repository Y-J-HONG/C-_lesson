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
	cout << "Ĭ�Ϲ��캯��" << endl;
}
person::person(int a) {
	cout << "�в������캯��" << endl;

}
person::~person()
{
	cout << "Ĭ����������" << endl;
}
person::person(const person& a) {
	m_age = a.m_age;
	cout << "Ĭ�Ͽ������캯��" << endl;
}

//2,��ֵ���ݷ�ʽ����������
void dowork(person &p1) {//��ʱ�൱��person p1=person��p�� ��ͻ����ӿ���
	//�������� �ͻ��ʡһ�ݿ���

}
//3����ֵ�ķ�ʽ ���ؾֲ�����
person dowork2() {
	person p1;
	return p1;
}
void test02() {
	person p = dowork2();
	//��debugģʽ�� ���������ε���
	//��release ģʽ�� �������Ż�
	//dowork2(p);
	//void dowork (person &p){
	//person p1;//����Ĭ�Ϲ���
	//	}_

}
//1�����Ѿ��õĶ�������ʼ���µĶ���
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