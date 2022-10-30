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
	cout << "手机构造函数调用" << endl;

}
Phone::Phone(string name )
{
	m_phonename = name;


}

Phone::~Phone()
{
	cout << "手机析构函数调用" << endl;
}

Game::Game()
{
	cout << "游戏构造函数调用" << endl;
}
Game::Game(string name)
{
	m_gamename = name;
}

Game::~Game()
{
	cout << "游戏析构函数调用" << endl;
}
class Person
{
public:
	string m_name;
	Phone m_phone;
	Game m_Game;
	void playgame() {
		cout << m_name << "拿着" << m_phone.m_phonename << "完" << m_Game.m_gamename << endl;

	}
	Person(string name, string phoneName, string gameName) :m_name(name), m_phone(phoneName), m_Game(gameName) {}

	Person();
	~Person();

private:

};

Person::Person()
{
	cout << "person 构造函数调用" << endl;

}

Person::~Person()
{
	cout << "person 析构函数调用" << endl;
}
void test01() {
	//类对象作为成员时  构造顺序先将对象一一构造：手机、游戏、人 析构是相反的 人 游戏 手机
	Person P("yy","苹果","王者");
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