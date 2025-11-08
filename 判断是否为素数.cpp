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