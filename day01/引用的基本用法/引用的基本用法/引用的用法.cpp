#include<iostream>
using namespace std;
//1、引用的基本语法 type &别名 =原名
void test01() {
	int a = 10;
	int& b = a;
	b = 20;
	cout << "b" << b << endl;
	cout << "a" << a << endl;

}
//2、引用必须做初始化
void test02() {
	int a = 10;
	int c = 20;

	//int& b;//此时报错
	//引用一但初始化就无法修改
	int& b = a;
	b = c;//进行赋值

	
}
void test03(){
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 2;
	}
	//3、给数组取别名
	int(&Arr)[10] = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << " "<< Arr[i] << " ";

	}
	cout << endl;
	//第二种方式取别名
	typedef int(ARRAY)[10];
	//一个具有10个元素的int类型的数组

	ARRAY& pArr2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << " " << pArr2[i] << " ";

	}
	cout << endl;

}



int main() {
	test03();
	cout << "你好吗" << endl;

	return 0;

}