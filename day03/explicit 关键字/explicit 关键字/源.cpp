#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Mystring {
public:
	Mystring(const char* str) {}
	explicit Mystring(int a) { mSize = a; };
	int mSize;
	char* mstr;

};
void test01() {
	Mystring str = "str";
	//Mystring str2 = 10;//��;��ʲô  str2 �ַ���Ϊ��10�� ���ַ�������Ϊ10
	//�������ֵ��÷�ʽΪ ��ʽ����ת��  Mystring str2(10);

	//����explicit ��ʾ���ܽ�����ʽ����ת��,��ʱ����ķ����ͻᱨ��
	
	Mystring st2(10);


}
int main()
{
	test01();

		

	system("pause");
	return EXIT_SUCCESS;
}