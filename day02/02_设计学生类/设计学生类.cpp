#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//���һ��ѧ���࣬ÿ��ѧ����������������ѧ��  ������ʾ������ѧ��
class Student {

public://����Ȩ��
	string name;
	int m_id;
	void setName(string name1)
	{
		name = name1;
	}
	void setNum(int num) {
		m_id = num;
	}
	void showName() {
		cout << "std������" << name << endl;

	}
	void showNum() {
		cout << "std������" << m_id << endl;
	}
};
void test01() {
	//ʵ����ѧ�� ͨ������������Ĺ���
	Student std1;
	std1.setName("����");
	std1.setNum(1);

	cout << "std������" << std1.name << "std��ѧ��Ϊ" << std1.m_id << endl;

	//ͨ����Ա��������ӡ��Ϣ
	std1.showName();
	std1.showNum();
	
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}