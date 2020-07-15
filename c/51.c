#include<iostream.h>
#include<string.h>
struct Worker{
	char name[15];
	int age;
	float pay;//salary
};
void main(){
	Worker x;
	char* t="LiWei";
	int d=28;float f=9000;
	strcpy(x.name,t);
	x.age=d;x,pay=f;
	cout << x.name <<'-'<<x.age<<'-'<< x.pay << endl;
}







