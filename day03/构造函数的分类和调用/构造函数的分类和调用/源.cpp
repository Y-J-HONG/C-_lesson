#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//����
//���ղ������з���  �޲ι��캯��  �вι��캯��
//�������ͽ��з���  ��ͨ���캯��  ��������
class person
{
public://���캯����������������д��public �ſ��Խ��е���

	person();
	person(int a);
	~person();
	//�������캯��
	person(const person& p) {
		cout << "�������캯��" << endl;
		age = p.age;

	}
	int age;

private:
	

};

person::person()
{
	cout << "Ĭ�Ϲ��캯��" << endl;

}

person::~person()
{
	cout << "Ĭ����������" << endl;
}
person::person(int a) {
	cout << "��ʼ��a" <<a<< endl;
}

void test1() {
//���캯�����÷���
	//���ŷ�����
	person p1;//Ĭ�Ϲ��캯����Ҫ��С����
	//person p1();//����������Ϊ�Ǻ�������
	p1.age = 10;

	person p2(p1);
	cout << "p2" << p2.age<<endl;


//��ʾ����
	person p3 = person(100);
	person p4 = person(p3);
	person(1);//person(100)//���������� ������������ֶ����������� ��ô�����д������н����Ժ���ͷ�
	//�������ÿ������캯�� ��ʼ����������
	person(p2);//�������д ������Ĭ������� person p2 �Ƕ��������,�ض�����
	//���д����ֵ �ǿ��Ե�person p5=person(p2);

	person p6 = 100;//�൱�ڵ�����person p6 =person ��100�� �������ʽ����ת��
	person p8 = p6;


}
int main()
{
	test1();


	system("pause");
	return EXIT_SUCCESS;
}