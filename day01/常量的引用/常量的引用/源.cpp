#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void test1() {
	//int& ref = 10;//�����˲��Ϸ����ڴ�
	const int& ref = 10;//�൱��int temp=10 const &ref =tmp
	int* p =(int *) & ref;
	*p = 1000;
	cout << "ref" << ref << endl;
}

//�������õĳ���ͨ���������β�
void showvalue(const int& val) {
	//val += 1000;//���ֻ������ʾ���� ���޸����ݾ���const����
	cout << "a=" << val << endl;

}
int main()
{

	test1();

	system("pause");
	return EXIT_SUCCESS;
}