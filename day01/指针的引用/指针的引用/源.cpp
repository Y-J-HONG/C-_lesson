#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Person {
	int m_age;

};
void allocatMemory(Person** p) {// ** p �����Person���� *p�����ָ�� pָ���ָ��

	*p = (Person*)malloc(sizeof(Person));
		(*p)->m_age = 130;
}
void test01() {
	Person* p = NULL;
	allocatMemory(&p);
	cout << "p������" << p->m_age << endl;
}

//ʹ��ָ�������
void allocatMemoryref(Person* &p) {// ** p �����Person���� *p�����ָ�� pָ���ָ��

	p = (Person*)malloc(sizeof(Person));
	(p)->m_age = 130;
}
void test02() {
	Person* p = NULL;
	allocatMemoryref(p);
	cout << "p������" << p->m_age << endl;
}
int main()
{

	test02();

	system("pause");
	return EXIT_SUCCESS;
}