#include<iostream>
using namespace std;
int F(int a,int b){
	if(a==1||b==1){
		return 1;
	}else{
		for(int i=2;i<a;i++){
			a=a*i;
		}
		for(int p=2;p<b;p++){
			b=b*p;
		}
		return a+b;
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<F(m,n)<<endl;
	return 0;
}