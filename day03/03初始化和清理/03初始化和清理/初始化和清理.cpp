#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class person {
public:
	//���캯����д��
	person()
	{
		cout << "this is the construct function" << endl;
	}
	person(int a) {
		cout << "this is the construct function "<<a << endl;
	}


	//��������������
	~person() {
		cout << "���캯���ĳ�ʼ��" << endl;
	}
};

void test01() {
	person p(1);//Ĭ�ϵ��õ����������͹��캯����ϵͳ�ṩ�������պ���ʵ�ֵ�


}
int main()
{
	person p2;

	test01();

	system("pause");
	return EXIT_SUCCESS;
}