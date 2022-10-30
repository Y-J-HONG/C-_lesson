#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//c语言下struct 不能声明函数
struct person
{
	char mName[64];
	int mAge;
};
void PersonEat(struct person* P){
	printf("%s 在吃饭", P->mName);
}
void test01() {
	struct person P1;
	strcpy(P1.mName, "德玛西亚");
	PersonEat(&P1);
}

struct Dog
{
	char mName[64];
	int mAge;
};
void DogEat(struct Dog * d) {
	printf("%s 在吃狗粮", d->mName);
}
//此时会报错从“person *”到“Dog *”的类型不兼容
void test02() {
	struct Dog d1;
	strcpy(d1.mName, "旺财");
	DogEat(&d1);

	struct person p1;
	strcpy(p1.mName, "老王");
	DogEat(&p1);
}
int main()
{


	test02();
	system("pause");
	return EXIT_SUCCESS;
}