#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Person {
public :
	Person() {}
	Person(const char * name, int age) {
	 m_Name = (char*)malloc(strlen(name) + 1);
		strcpy(m_Name,name);
		m_age = age;
	}//�˺�ϵͳ�����ṩĬ���޲ι��캯��

	//�������
	Person(const Person& p1) {
		m_age = p1.m_age;
		m_Name = (char*)malloc(strlen(p1.m_Name) + 1);
	}
	~Person() {
		cout << "������������" << endl;
		if (m_Name != NULL) {
			free (m_Name);
			m_Name = NULL;
		}
	}

	char* m_Name;
	int m_age;
};
void test01() {
	
	Person p1("hgg", 1);
	//ϵͳĬ�ϵĿ������� ����м򵥵Ŀ���
	//��ʱ���õ���ǳ���� �����������ָ����������� �ͷ�ʱ������쳣 ʹ�ö��������������ͷ� ����
	//�����������Ҫ���¹��쿽������  �������
	Person P2(p1);
	

}
int main()
{


	test01();
	system("pause");
	return EXIT_SUCCESS;
}