#include<iostream>
using namespace std;
int func(){
	int a=0;
	static int b=1;
	a++;
	b++;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return a+b;
}
int main()
{
	cout<<func()<<endl;
	cout<<func()<<endl;
	return 0;
}