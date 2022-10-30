#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//分类
//按照参数进行分类  无参构造函数  有参构造函数
//按照类型进行分类  普通构造函数  拷贝构造
class person
{
public://构造函数和析构函数必须写在public 才可以进行调用

	person();
	person(int a);
	~person();
	//拷贝构造函数
	person(const person& p) {
		cout << "拷贝构造函数" << endl;
		age = p.age;

	}
	int age;

private:
	

};

person::person()
{
	cout << "默认构造函数" << endl;

}

person::~person()
{
	cout << "默认析构函数" << endl;
}
person::person(int a) {
	cout << "初始化a" <<a<< endl;
}

void test1() {
//构造函数调用方法
	//括号法调用
	person p1;//默认构造函数不要加小括弧
	//person p1();//编译器会认为是函数声明
	p1.age = 10;

	person p2(p1);
	cout << "p2" << p2.age<<endl;


//显示调用
	person p3 = person(100);
	person p4 = person(p3);
	person(1);//person(100)//叫匿名对象 如果编译器发现对象是匿名的 那么在这行代码运行结束以后就释放
	//不能利用拷贝构造函数 初始化匿名对象
	person(p2);//如果这样写 编译器默认你成了 person p2 是对象的声明,重定义了
	//如果写成右值 是可以的person p5=person(p2);

	person p6 = 100;//相当于调用了person p6 =person （100） 这叫做隐式类型转化
	person p8 = p6;


}
int main()
{
	test1();


	system("pause");
	return EXIT_SUCCESS;
}