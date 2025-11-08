#include<iostream>
using namespace std;
int Fibo(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return Fibo(n-1)+Fibo(n-2);
		
	}
}
int main()
{
	long value,n;
	cin>>n;
	value=Fibo(n);
	cout<<value<<endl;
	return 0;
}