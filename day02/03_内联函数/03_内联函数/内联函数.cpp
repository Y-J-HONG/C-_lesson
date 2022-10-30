#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//定义一个加法、
#define Myadd(x,y) x+y
void test1() {
	int ret = Myadd(10, 20)*20;//预期结果是600 但是却是410 表示10+20*20
	cout << "ret=" << ret << endl;
}
#define MyCompare(a,b) ((a)<(b))?a:b//返回最小的值
void test2() {
	int a = 10;
	int b = 20;
	int ret=MyCompare(++a, b);//预期结果 11  但是实际结果是12
	cout << "ret" << ret << endl;
}
//宏函数没有作用域

inline void comapare(int a, int b) {
	int ret = ((a) < (b)) ? a : b;
	cout << "ret" << ret << endl;

}
void test3() {
	int a = 10;
	int b = 20;
	comapare(++a, b);//此时显示结果为11,这是因为++a在传入之前就做了运算
}
//内联函数注意事项
inline void func();//内敛函数声明
inline void func() { }//如果内联函数实现不加入inline关键字 依然会是普通函数

class person {
	

};
int main()
{

	test3();

	system("pause");
	return EXIT_SUCCESS;
}