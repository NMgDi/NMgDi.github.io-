#include<iostream>
using namespace std;
int addOne(int &a){
	a+=1;
	return a;
}
int main()
{
	int x=0;
	cout<<x<<endl;
	x=addOne(x);
	cout<<x<<endl;
	return 0;
}