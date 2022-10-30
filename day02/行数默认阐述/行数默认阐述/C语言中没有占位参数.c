#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string.h>

//c语言中没有默认参数
void func(int a, int b, int c) {
	printf("a=%d,b=%d", a, b);

}
void test01() {
	func(1,2,4);
}
////c语言中没有占位参数
void func2(int a, int = 1) {

}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}