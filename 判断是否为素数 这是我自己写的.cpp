//如果一个数在2到√n范围内都没有因子，那它一定是素数//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i;
	long m;
	cout<<"ur number is ";
	cin>>m;
	
	for(i=2;i<=sqrt(m);i++)
		if(m%i==0)
		break;
	
	if(i>sqrt(m)){
		cout<<"suhsu";
	}else{
		cout<<"bushisushu"<<endl;
	}
}