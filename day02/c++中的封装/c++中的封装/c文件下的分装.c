#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//c������struct ������������
struct person
{
	char mName[64];
	int mAge;
};
void PersonEat(struct person* P){
	printf("%s �ڳԷ�", P->mName);
}
void test01() {
	struct person P1;
	strcpy(P1.mName, "��������");
	PersonEat(&P1);
}

struct Dog
{
	char mName[64];
	int mAge;
};
void DogEat(struct Dog * d) {
	printf("%s �ڳԹ���", d->mName);
}
//��ʱ�ᱨ��ӡ�person *������Dog *�������Ͳ�����
void test02() {
	struct Dog d1;
	strcpy(d1.mName, "����");
	DogEat(&d1);

	struct person p1;
	strcpy(p1.mName, "����");
	DogEat(&p1);
}
int main()
{


	test02();
	system("pause");
	return EXIT_SUCCESS;
}