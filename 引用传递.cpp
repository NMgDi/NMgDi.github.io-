#include<iostream>
using namespace std;

	void swap(int&x,int&y)	
	{	int temp;
		temp=x;x=y;y=temp;
	}
int main()
{
		int a=1,b=2;
	cout<<"Before exchange:a="<<a<<",b="<<b<<endl;
	swap(a,b);
	cout<<"After exchange:a="<<a<<",b="<<b<<endl;
	return 0;
}