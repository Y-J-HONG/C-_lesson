#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//����malloc ��ʽ����ռ�
//class Person
//{
//public:
//	char* pName;
//	int mAge;
//	Person() {
//		mAge = 20;
//		pName = (char*)malloc(strlen("john") + 1);
//		strcpy(pName, "John");
//		cout << "the name is" << pName << endl;
//
//	};
//
//	~Person() {
//		if (pName != NULL) {
//			free(pName);
//			cout << "������������" << endl;
//
//		}
//	};
//
//private:
//
//};


//2������new���й���
class Person {
public :
	Person() {
		cout << "Ĭ�Ϲ��캯��" << endl;

	};
	~Person() {
		cout << "Ĭ����������" << endl;
	};

};
void test() {
	//ʹ��ջ������
	//Person p;

	//ʹ�ö��������ڴ�
	//����new������ָ�붼ʱperson����
	//��malloc��������Ҫ����ǿ������ת��
	//����malloc �������Ĭ�Ϲ��캯�� ��new�����
	//new ���������  malloc�Ǻ���
	//delete  Ҳ��һ����������newʹ��  malloc���free ʹ��
	//
	Person* p1 = new Person;
	delete p1;

	//2�����ʹ��void * ������ new������ָ�� ������ͷ�����
	void *p = new Person;
	delete p;

	//ͨ��new�����п������� һ����Ҫ����Ĭ�Ϲ���  ��Ϊ �������ʹ�����вι��� ��ôϵͳ��Ĭ�Ϲ����ʧЧ
	//��ʱnew ʱ�޷����õ�Ĭ�Ϲ��캯�� ���Ծͻᱨ��

	Person* Array = new Person[10];
	delete[] Array;

}

int main()
{

	test();

	system("pause");
	return EXIT_SUCCESS;
}