#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//����һ���ӷ���
#define Myadd(x,y) x+y
void test1() {
	int ret = Myadd(10, 20)*20;//Ԥ�ڽ����600 ����ȴ��410 ��ʾ10+20*20
	cout << "ret=" << ret << endl;
}
#define MyCompare(a,b) ((a)<(b))?a:b//������С��ֵ
void test2() {
	int a = 10;
	int b = 20;
	int ret=MyCompare(++a, b);//Ԥ�ڽ�� 11  ����ʵ�ʽ����12
	cout << "ret" << ret << endl;
}
//�꺯��û��������

inline void comapare(int a, int b) {
	int ret = ((a) < (b)) ? a : b;
	cout << "ret" << ret << endl;

}
void test3() {
	int a = 10;
	int b = 20;
	comapare(++a, b);//��ʱ��ʾ���Ϊ11,������Ϊ++a�ڴ���֮ǰ����������
}
//��������ע������
inline void func();//������������
inline void func() { }//�����������ʵ�ֲ�����inline�ؼ��� ��Ȼ������ͨ����

class person {
	

};
int main()
{

	test3();

	system("pause");
	return EXIT_SUCCESS;
}