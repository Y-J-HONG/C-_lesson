#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Person
{
	char mName[64];
	int mAge;
	void Personeat() {
		cout << mName << "���˷�" << endl;
	}
};

struct Dog
{
	char mName[64];
	int mAge;
	void Dogeat() {
		cout << mName << "�Թ���" << endl;
	}
};
//c++�з�װ �ϸ������ת����� �����Ժ���Ϊ �󶨵�һ��
//�����Ժ���Ϊ��Ϊһ����������ʾ�����е�һЩ����
//����Ȩ��  public protected  private ����Ȩ��  ����Ȩ��  ˽��Ȩ��

void test1() {
	Person	p1;
	strcpy(p1.mName, "����");
	p1.Personeat();
	//p1.Dogeat()//����

}
//struct ��class ��һ����˼  Ψһ�Ĳ�ͬ���� Ĭ��Ȩ��  struct ��public
//class ��private
class Animal {
	//���������Ȩ�� Ĭ��Ȩ��λprivate
	//private �������ڿ��Է������ⲻ�ܽ��з���
	void eat();
	void setWeight() {
		Weight = 100;
	}
public:
	int mHeight;
protected://����Ȩ�������ڲ����Է��� ���ⲻ�����Է��� ���ⲻ���Է���
	int Weight;
};
void test2() {
	Animal a1;
	//a1.eat()//privat���ⲻ�ܽ��з���
	a1.mHeight = 100;//����Ȩ����������з���
}


int main()
{
	system("pause");
	return EXIT_SUCCESS;
}