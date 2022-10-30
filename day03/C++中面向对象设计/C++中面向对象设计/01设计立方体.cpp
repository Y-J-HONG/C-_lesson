#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*
设计一个立方体类（）cube
求出立方体的面积
分别用全局函数 和成员函数 判断连个立方体是否相等
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
		cout << "立方体的面积为" << 2 * m_len * m_wid + 2 * m_len * m_Hig + 2 * m_wid * m_Hig << endl;
	}
	void getCubeV() {
		cout << "立方体的体积是" << m_len * m_wid * m_Hig << endl;
	}
	bool compareCubeByclass(cube& c1) {
		bool ret = m_Hig == c1.getHig() && m_len == c1.getlen() && m_wid == c1.getwid();
		return ret;
	}
};
//全局函数判断 两个立方体是否相等
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
		cout << "c1和c2相等" << endl;
	}
	else  {
		cout << "c1和c2不相等" << endl;
	}
	//通过成员函数来判断立方体是否相等
	bool ret1 = c1.compareCubeByclass(c2);
	if (ret1) {
		cout << "c1和c2相等" << endl;
	}
	else {
		cout << "c1和c2不相等" << endl;
	}
}
int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}