#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//��������
//c++�к������ƿ����ظ�
//������ͬһ�������� ����������ͬ
//�����Ĳ��� ������ͬ ���Ͳ�ͬ  ����˳��ͬ
//�����ķ���ֵ������Ϊ�������ص�������? //�𰸲����� ��Ϊ���Բ������䷵��ֵ ���Բ���ͨ������ֵ���ж�

//int func() {//
//	return 0;
//}


void func() {
	cout << "�޲�����func" << endl;

}
void func(int a) {
	cout << "�в�����int_func" << endl;
}
void func(double a) {
	cout << "�в�����double_func" << endl;
}
void func(double a,int b) {
	cout << "�в�����double_int_func" << endl;
}
void func(int a,double b) {
	cout << "�в�����int_double_func" << endl;
}

void func2(int a) {

}
void func2(int a,int b=10) {

}
void test02() {
	//func2(10);//��ʱ��ͳ����˶���������
}
//ʹ�����ý��к�������
void func3(const int& a) {//�����int &a ����ֲ��Ϸ��ڴ�ռ����� int tmp=10 const int &a=tem;
//����const�Ժ�ͽ����
	cout << "const int &a " << a << endl;
}
void func3( int& a) {//�����int &a ����ֲ��Ϸ��ڴ�ռ�����
	//����const�Ժ�ͽ����
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