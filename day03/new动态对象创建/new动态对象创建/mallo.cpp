#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//采用malloc 方式申请空间
//class Person
//{
//public:
//	char* pName;
//	int mAge;
//	Person() {
//		mAge = 20;
//		pName = (char*)malloc(strlen("john") + 1);
//		strcpy(pName, "John");
//		cout << "the name is" << pName << endl;
//
//	};
//
//	~Person() {
//		if (pName != NULL) {
//			free(pName);
//			cout << "着是析构函数" << endl;
//
//		}
//	};
//
//private:
//
//};


//2、采用new进行构造
class Person {
public :
	Person() {
		cout << "默认构造函数" << endl;

	};
	~Person() {
		cout << "默认析构函数" << endl;
	};

};
void test() {
	//使用栈区开辟
	//Person p;

	//使用堆区开辟内存
	//所有new出来的指针都时person类型
	//而malloc出来的需要进行强制类型转换
	//采用malloc 不会调用默认构造函数 而new会调用
	//new 是运算符号  malloc是函数
	//delete  也是一个运算符配合new使用  malloc配合free 使用
	//
	Person* p1 = new Person;
	delete p1;

	//2、如果使用void * 来接收 new出来的指针 会出现释放问题
	void *p = new Person;
	delete p;

	//通过new来进行开辟数组 一定需要加上默认构造  因为 如果我们使用了有参构造 那么系统的默认构造就失效
	//此时new 时无法调用到默认构造函数 所以就会报错

	Person* Array = new Person[10];
	delete[] Array;

}

int main()
{

	test();

	system("pause");
	return EXIT_SUCCESS;
}