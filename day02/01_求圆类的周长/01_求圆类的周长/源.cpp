//���һ���࣬��Բ���ܳ�
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const double pi = 3.14;

class circle {//class��ʾһ���� 
public://����Ȩ��
	int m_r;//��Ա����
	//������д�ĺ����г�Ա����
	double calculate_C() {
		return 2 * pi * m_r;
	}
	void setR(int r) {
		m_r = r;
	}
};
void test01() {
	//ͨ���ഴ��Բ 
	circle c1;//Բ ������
	c1.m_r = 10;
	cout << "c1���ܳ�Ϊ" << c1.calculate_C() << endl;


	//ͨ����Ա���������� Բ�İ뾶
	//��Ա���������޸� ��Ա����
	c1.setR(20);
	cout << "c1���ܳ�Ϊ" << c1.calculate_C() << endl;

}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}