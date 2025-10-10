#include<iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	if(num<10000||num>99999)
	{
		cout<<"这是在干什么，只让你输五位数";
		return 1;
	}
	cout<<"这是结果";
	while(num!=0)
	{
		int digit=num%10;
		cout<<digit;
		
		num/=10;
		
		if(num>0){
			cout<<"  ";
		}
	}
		
		cout<<endl;
	    return 0;
}