#include<iostream>
using namespace std;
int main()
{
	int i1=10;
	int i2=20;
	int tempt=0;
	tempt=i1,i1=i2;i2=tempt;
	cout<<i1<<" "<<i2<<endl;
	return 0;
}