#include<iostream>
using namespace std;
int main()
{
	int m,n,a,b,r;
	cin>>m>>n;
	if(m>n){
		a=m;b=n;
	}
	else{
		a=n;b=m;
	}
	
	while(b!=0)
	{	r=a%b;
		a=b;
		b=r;
	}
	cout<<"result "<<a<<endl;
	return 0;
}