#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"test.h"
//extern "C" void show();//1��show���� ����c���Խ������� ��Ҫ��#include "test.h"

//����.h��ʵ�� ��ͷ�ļ��м��� #ifdef __cplusplus/����������
// ����.cpp�м���ͷ�ļ�
//c++�е���c����
int main()
{

	show();//��c++�к������Է������� �������������������Ƹı����void show() �����showv()
	//����c��������û�к�������
	


	system("pause");
	return EXIT_SUCCESS;
}