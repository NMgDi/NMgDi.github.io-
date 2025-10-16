#include<iostream>
using namespace std;
int main()
{
	int i1=10;	int i2=20;
	int *p1=&i1;	int*p2=&i2;
	int tempt;
	tempt=*p1,*p1=*p2,*p2=tempt;
	cout<<*p1<<" "<<*p2<<endl;
	return 0;
}