#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void swap1(int a, int b) {
	int temp = a;
	 a = b;
	 b = temp;
	cout << "myswap a" << a << endl;
	cout << "myswap b" << b << endl;
}
//��ʱ���ݲ��ɹ�
void test1() {

	int c = 10;
	int d = 20;
	swap1(c, d);
	cout << " c=" << c << endl;
	cout << " d=" << d << endl;
}

//ʹ�õ�ַ���д���
void swap1(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "myswap a" << *a << endl;
	cout << "myswap b" << *b << endl;
}

void test2() {

	int c = 10;
	int d = 20;
	swap1(&c, &d);
	cout << " c=" << c << endl;
	cout << " d=" << d << endl;
}
//ʹ�����ô��� ����ȡ�����ķ�ʽ���д���
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "myswap a" << a << endl;
	cout << "myswap b" << b << endl;
}

void test3() {

	int c = 10;
	int d = 20;
	swap3(c, d);
	cout << " c=" << c << endl;
	cout << " d=" << d << endl;
}

// ���õ�ע������
//1��Ӧ�ñ�����һ��Ϸ����ڴ�ռ�
//2����Ҫ���ؾֲ�����������
void test4()
{
	//int& a = 109;//����
}

int& dowork() {
	int a = 19;
	return a;
}
void test5() {
	int& ret = dowork();
	cout << "ret" << ret << endl;//��һ��10�������Ż�
	cout << "ret" << ret << endl; 
	cout << "ret" << ret << endl; 
	cout << "ret" << ret << endl; 

}


int& dowork1() {
	static int a = 19;
	return a;
}
void test6() {
	int& ret = dowork1();
	cout << "ret" << ret << endl;//��һ��10�������Ż�
	cout << "ret" << ret << endl;
	cout << "ret" << ret << endl;
	cout << "ret" << ret << endl;
}
//��������ķ���ֵ�����ÿ�����Ϊ��ֵ���в���
int main()
{
	test5();


	system("pause");
	return EXIT_SUCCESS;
}