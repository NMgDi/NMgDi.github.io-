#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int sum=a+b+c+d;
	double average=sum/4.0;
	int product=a*b*c*d;
	
	cout<<sum<<endl;
	cout<<average<<endl;
	cout<<product<<endl;
	return 0;
}