#include<iostream>

using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x>10){
		cout<<x<<"是一位数\n";
	}
	else if(x<100){
		cout<<x<<"是两位数\n";
	}
	else if(x<1000){
		cout<<x<<"是三位数\n";
	}
	else{
		cout<<x<<"大于999\n";
	}
	return 0;
}