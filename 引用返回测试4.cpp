#include<iostream>
using namespace std;
int &maxVal(int &x,int &y){
	if(x>y){
		return x;
	}else{
		return y;
	}
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<maxVal(a,b)<<endl;
	return 0;
}