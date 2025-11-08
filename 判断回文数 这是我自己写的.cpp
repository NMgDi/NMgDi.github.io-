#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	int p=number/10000;
	int q=number%10;
	
	int m=(number/1000)%10;
	int n=(number/10)%10;
	if(p==q&&m==n){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}	
	return 0;
}