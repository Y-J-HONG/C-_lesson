#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//������ϯ��
//����  Ϊ�������еĶ���  ���ұ�ֻ֤��һ������ʵ�� 
//��Ҫ�����캯������˽�л�
class ChairMan
{
public:
	void func() {
		cout << "����" << endl;
	}
	int a;
	//��������дstatic ��ΪChairMan �޷�ʵ���� ����Ϊ���캯��������˽�л���
	//����ֻ��ͨ������ķ�ʽ 
	static ChairMan* getInstance() {

		return singleMan;
	}


	~ChairMan() {};

private:
	static ChairMan* singleMan;
	ChairMan() {
		cout << "����������ϯ" << endl;
	};

};
ChairMan* ChairMan::singleMan = new ChairMan;//���г�ʼ
void test01() {
	//���singleMan��public��
	//ChairMan::singleMan=NULL;

	////ʹ�ù������� ��ʱcm1 ��cm2 ��ָ��ͬһ��singleMan�ڴ��ַ
	//ChairMan* cm1 = ChairMan::singleMan;
	//ChairMan* cm2 = ChairMan::singleMan;
	////��ʱʹ��singleMan��ָ��ָ���
	//ChairMan::singleMan = NULL;



	//############
	// ���ʾ�̬��Ա
	//  ������ClassName::MemberName,(ʵ������)
	//	Ҳ������ClassName.MemberNme������ķ��ʣ�
	//	�������ǰ�ߣ���Ϊ�����׾Ϳ����ж���Ա�Ǿ�̬��Ա��

	//	����ʵ����Ա
	//	ֻ����ClassName.MemberName��(��ʵ���ķ���)
	//	������ClassName::MemberName.
	//
	//�˴�ֻ����:: ��������
	//ChairMan::func();//���� ����ķ���
	ChairMan *a= ChairMan::getInstance();






}

int main()
{
	cout << "main �ĵ���" << endl;
	//����ʹ����static �����ڱ���׶� �ͽ����˵���
	test01();


	system("pause");
	return EXIT_SUCCESS;
}