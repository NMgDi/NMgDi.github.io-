#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	int a,b,c,d;
	a=(number/1000+9);
	b=(number/100)%10;
	c=(number/10)%10;
	d=number%10;
	
	a=(a+9)%10;
	b=(b+9)%10;
	c=(c+9)%10;
	d=(d+9)%10;
	cout<<c<<d<<a<<b<<endl;
	return 0;
}