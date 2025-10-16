#include<iostream>
using namespace std;
int main()
{
	int x=5;
	int *p=&x;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<*(&x)<<endl;
	return 0;
}