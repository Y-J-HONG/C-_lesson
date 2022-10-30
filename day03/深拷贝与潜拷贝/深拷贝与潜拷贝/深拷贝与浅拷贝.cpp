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
	}//此后系统不会提供默认无参构造函数

	//深拷贝代码
	Person(const Person& p1) {
		m_age = p1.m_age;
		m_Name = (char*)malloc(strlen(p1.m_Name) + 1);
	}
	~Person() {
		cout << "析构函数调用" << endl;
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
	//系统默认的拷贝构造 会进行简单的拷贝
	//此时采用的是浅拷贝 如果属性中有指向堆区的数据 释放时会出现异常 使得堆区进行了两次释放 报错
	//解决：我们需要重新构造拷贝函数  进行深拷贝
	Person P2(p1);
	

}
int main()
{


	test01();
	system("pause");
	return EXIT_SUCCESS;
}