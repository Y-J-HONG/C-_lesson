#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Person {
	int m_age;

};
void allocatMemory(Person** p) {// ** p 具体的Person对象 *p对象的指针 p指针的指针

	*p = (Person*)malloc(sizeof(Person));
		(*p)->m_age = 130;
}
void test01() {
	Person* p = NULL;
	allocatMemory(&p);
	cout << "p的年龄" << p->m_age << endl;
}

//使用指针的引用
void allocatMemoryref(Person* &p) {// ** p 具体的Person对象 *p对象的指针 p指针的指针

	p = (Person*)malloc(sizeof(Person));
	(p)->m_age = 130;
}
void test02() {
	Person* p = NULL;
	allocatMemoryref(p);
	cout << "p的年龄" << p->m_age << endl;
}
int main()
{

	test02();

	system("pause");
	return EXIT_SUCCESS;
}