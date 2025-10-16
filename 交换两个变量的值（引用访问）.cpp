#include<iostream>
using namespace std;
int main()
{
	int i1=10;int i2=20;
	int &x=i1;int &y=i2;
	int tempt;
	tempt=x,x=y,y=tempt;
	cout<<x<<" "<<y<<endl;
	return 0;
}