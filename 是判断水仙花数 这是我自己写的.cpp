#include<iostream>
using namespace std;
int main()
{
	int num;
	int p,q,m;
	cin>>num;
	if(num<100||num>999){
		cout<<"invalid";
	}
	else{
		int p=num%10;
		int q=(num/10)%10;
		int m=(num/100)%10;
		int standardNum=p*p*p+q*q*q+m*m*m;
		if(num==standardNum){
			cout<<num;
		}
		
	}
	return 0;
}