#include<iostream>
using namespace std;
int main()
{
	long int a=10,b=20,tempt;
	long int *p1=&a,*p2=&b,*pt;
	cout<<p1<<'\t'<<p2<<endl;
	pt=p1,p1=p2,p2=pt;
	cout<<p1<<"\n"<<p2<<endl;
	cout<<*p1<<"\t"<<*p2<<endl;
	return 0;
}