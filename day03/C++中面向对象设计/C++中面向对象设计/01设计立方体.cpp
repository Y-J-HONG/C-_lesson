#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*
���һ���������ࣨ��cube
�������������
�ֱ���ȫ�ֺ��� �ͳ�Ա���� �ж������������Ƿ����
*/
class cube {
private :
	int m_len;
	int m_wid;
	int m_Hig;
public:
	void setlen(int len) {
		m_len = len;
	}
	void setwid(int wid) {
		m_wid = wid;
	}
	void setHig(int Hig) {
		m_Hig = Hig;
	}

	int getlen() {
		return m_len;
	}
	int getwid() {
		return m_wid;
	}
	int getHig() {
		return m_Hig;
	}
	void getCubeS() {
		cout << "����������Ϊ" << 2 * m_len * m_wid + 2 * m_len * m_Hig + 2 * m_wid * m_Hig << endl;
	}
	void getCubeV() {
		cout << "������������" << m_len * m_wid * m_Hig << endl;
	}
	bool compareCubeByclass(cube& c1) {
		bool ret = m_Hig == c1.getHig() && m_len == c1.getlen() && m_wid == c1.getwid();
		return ret;
	}
};
//ȫ�ֺ����ж� �����������Ƿ����
bool compareCube(  cube& c1, cube& c2) {
	if (c1.getlen() == c2.getlen() && c1.getHig() == c2.getHig() && c1.getwid() == c2.getwid()) {
		return true;
	}
	else {
		return false;
	}
}
void test01() {
	cube c1;
	c1.setHig( 10);
	c1.setlen (15);
	c1.setwid ( 20);
	c1.getCubeS();
	c1.getCubeV();


	cube c2;
	c2.setHig(10);
	c2.setlen(15);
	c2.setwid(20);
	c2.getCubeS();
	c2.getCubeV();

	bool ret = compareCube(c2, c1);
	if (ret) {
		cout << "c1��c2���" << endl;
	}
	else  {
		cout << "c1��c2�����" << endl;
	}
	//ͨ����Ա�������ж��������Ƿ����
	bool ret1 = c1.compareCubeByclass(c2);
	if (ret1) {
		cout << "c1��c2���" << endl;
	}
	else {
		cout << "c1��c2�����" << endl;
	}
}
int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}