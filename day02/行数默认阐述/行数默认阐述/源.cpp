#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void func(int a, int b = 10, int c = 10) {//������Ĭ�ϲ��� 
	//��������ע������ ���һ��λ������Ĭ�ϲ�������ô�����λ�ÿ�ʼ �������ұ���Ҫ��Ĭ�ϲ���
	//�������  �в������ô���Ĳ��� ���û�в���ֵ ������Ĭ��ֵ 
	cout << "a+b=" << a + b << endl;
}
void test01() {
	func(1);
}
//���� ռλ����
//�������ռλ���� ����ʹ�õ�ʱ������ṩ������� �����ں����ڲ�û���õ�
//û��ʲô����; ������ʱ���õ�
//ռλ����Ҳ������Ĭ��ֵ int =1
void func2(int a, int=1) {

}

//�����������������Ĭ�ϲ��� ��ô����ʵ���б���û��
void func3(int a=10, int b=10);
void func3(int a = 10, int b = 10) {};
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}