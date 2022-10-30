#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct Person
{
	char mName[64];
	int mAge;
	void Personeat() {
		cout << mName << "吃人饭" << endl;
	}
};

struct Dog
{
	char mName[64];
	int mAge;
	void Dogeat() {
		cout << mName << "吃狗粮" << endl;
	}
};
//c++中封装 严格的类型转换检测 让属性和行为 绑定到一起
//将属性和行为作为一个整体来表示生活中的一些事务
//控制权限  public protected  private 公共权限  保护权限  私有权限

void test1() {
	Person	p1;
	strcpy(p1.mName, "老王");
	p1.Personeat();
	//p1.Dogeat()//报错

}
//struct 和class 是一个意思  唯一的不同就是 默认权限  struct 是public
//class 是private
class Animal {
	//如果不申明权限 默认权限位private
	//private 就是类内可以访问类外不能进行访问
	void eat();
	void setWeight() {
		Weight = 100;
	}
public:
	int mHeight;
protected://保护权限在类内部可以访问 内外不不可以访问 类外不可以访问
	int Weight;
};
void test2() {
	Animal a1;
	//a1.eat()//privat类外不能进行访问
	a1.mHeight = 100;//公有权限在类外进行访问
}


int main()
{
	system("pause");
	return EXIT_SUCCESS;
}