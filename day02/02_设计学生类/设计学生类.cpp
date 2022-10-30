#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//设计一个学生类，每个学生都有他的姓名和学号  可以显示姓名和学号
class Student {

public://公共权限
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
		cout << "std的姓名" << name << endl;

	}
	void showNum() {
		cout << "std的姓名" << m_id << endl;
	}
};
void test01() {
	//实例化学生 通过类来创建类的过程
	Student std1;
	std1.setName("王五");
	std1.setNum(1);

	cout << "std的姓名" << std1.name << "std的学号为" << std1.m_id << endl;

	//通过成员函数来打印信息
	std1.showName();
	std1.showNum();
	
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}