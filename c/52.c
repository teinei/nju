#include<iostream>
using namespace std;
class B{
	public:
		start(){cout<<"B::s() called.\n";}
		virtual ~B(){cout<<"B::~start() called.\n";}
};
class E:public B
{
	public:
		E(int i){
			cout<<"E::E() called.\n";
			buf=new char[i];}
		virtual ~E()
		{
			delete []buf;
			cout<<"E::~E() called.\n";
		}
	private:
		char *buf;
}

void fun(B *a)
{
	cout<<"fun() called.\n";
	delete a;
}

void main(){
	B* a= new E(15);
	fun(a);
}














