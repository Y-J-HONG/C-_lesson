#include<iostream>
using namespace std;
//1�����õĻ����﷨ type &���� =ԭ��
void test01() {
	int a = 10;
	int& b = a;
	b = 20;
	cout << "b" << b << endl;
	cout << "a" << a << endl;

}
//2�����ñ�������ʼ��
void test02() {
	int a = 10;
	int c = 20;

	//int& b;//��ʱ����
	//����һ����ʼ�����޷��޸�
	int& b = a;
	b = c;//���и�ֵ

	
}
void test03(){
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 2;
	}
	//3��������ȡ����
	int(&Arr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << " "<< Arr[i] << " ";

	}
	cout << endl;
	//�ڶ��ַ�ʽȡ����
	typedef int(ARRAY)[10];
	//һ������10��Ԫ�ص�int���͵�����

	ARRAY& pArr2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << pArr2[i] << " ";

	}
	cout << endl;

}



int main() {
	test03();
	cout << "�����" << endl;

	return 0;

}