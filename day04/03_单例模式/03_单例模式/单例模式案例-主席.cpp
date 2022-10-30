#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//创建主席类
//需求  为创建类中的对象  并且保证只有一个对象实例 
//需要将构造函数进行私有化
class ChairMan
{
public:
	void func() {
		cout << "公有" << endl;
	}
	int a;
	//这里必须得写static 因为ChairMan 无法实例化 （因为构造函数进行了私有化）
	//所以只能通过共享的方式 
	static ChairMan* getInstance() {

		return singleMan;
	}


	~ChairMan() {};

private:
	static ChairMan* singleMan;
	ChairMan() {
		cout << "创建国家主席" << endl;
	};

};
ChairMan* ChairMan::singleMan = new ChairMan;//进行初始
void test01() {
	//如果singleMan在public中
	//ChairMan::singleMan=NULL;

	////使用共享数据 此时cm1 和cm2 都指向同一个singleMan内存地址
	//ChairMan* cm1 = ChairMan::singleMan;
	//ChairMan* cm2 = ChairMan::singleMan;
	////此时使得singleMan的指针指向空
	//ChairMan::singleMan = NULL;



	//############
	// 访问静态成员
	//  可以用ClassName::MemberName,(实例访问)
	//	也可以用ClassName.MemberNme，（类的访问）
	//	但最好用前者，因为很容易就可以判定成员是静态成员。

	//	访问实例成员
	//	只能用ClassName.MemberName，(对实例的访问)
	//	不能用ClassName::MemberName.
	//
	//此处只能用:: 的作用域
	//ChairMan::func();//报错 对类的访问
	ChairMan *a= ChairMan::getInstance();






}

int main()
{
	cout << "main 的调用" << endl;
	//由于使用了static 所以在编译阶段 就进行了调用
	test01();


	system("pause");
	return EXIT_SUCCESS;
}