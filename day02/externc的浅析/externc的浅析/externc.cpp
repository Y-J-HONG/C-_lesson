#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"test.h"
//extern "C" void show();//1、show方法 按照c语言进行链接 不要用#include "test.h"

//采用.h中实现 在头文件中加入 #ifdef __cplusplus/。。。。。
// 并在.cpp中加入头文件
//c++中调用c语言
int main()
{

	show();//在c++中函数可以发生重载 编译器会把这个函数名称改变比如void show() 变成了showv()
	//但是c语言中又没有函数重载
	


	system("pause");
	return EXIT_SUCCESS;
}