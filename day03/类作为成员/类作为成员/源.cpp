#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Game
{
public:
	string m_gamename;
	Game();
	Game(string name);
	~Game();

private:

};
class Phone
{
public:
	string  m_phonename;
	Phone();
	Phone(string name);
	~Phone();

private:

};

Phone::Phone()
{ 
	cout << "�ֻ����캯������" << endl;

}
Phone::Phone(string name )
{
	m_phonename = name;


}

Phone::~Phone()
{
	cout << "�ֻ�������������" << endl;
}

Game::Game()
{
	cout << "��Ϸ���캯������" << endl;
}
Game::Game(string name)
{
	m_gamename = name;
}

Game::~Game()
{
	cout << "��Ϸ������������" << endl;
}
class Person
{
public:
	string m_name;
	Phone m_phone;
	Game m_Game;
	void playgame() {
		cout << m_name << "����" << m_phone.m_phonename << "��" << m_Game.m_gamename << endl;

	}
	Person(string name, string phoneName, string gameName) :m_name(name), m_phone(phoneName), m_Game(gameName) {}

	Person();
	~Person();

private:

};

Person::Person()
{
	cout << "person ���캯������" << endl;

}

Person::~Person()
{
	cout << "person ������������" << endl;
}
void test01() {
	//�������Ϊ��Աʱ  ����˳���Ƚ�����һһ���죺�ֻ�����Ϸ���� �������෴�� �� ��Ϸ �ֻ�
	Person P("yy","ƻ��","����");
	P.playgame();

	/*P.m_phone;
	P.m_Game;*/


}
int main()
{
	test01();



	system("pause");
	return EXIT_SUCCESS;
}