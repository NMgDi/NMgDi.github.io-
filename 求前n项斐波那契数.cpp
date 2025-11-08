#include<iostream>
using namespace std;
int main()
{	int n,i,a,b;
	cout<<"how many times would u wanna it run: ";
	cin>>n;
	a=0,b=1;
	for(i=3;i<=n;i++){
		int x=a+b;
		a=b;
		b=x;
		cout<<x<<"\n";
	}
	
	
}