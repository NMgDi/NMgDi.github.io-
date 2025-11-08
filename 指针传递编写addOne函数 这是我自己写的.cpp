#include<iostream>
using namespace std;
int addOne(int *y){
	*y+=1;
	return *y;
}
int main()
{
	int x=0;
	cout<<x<<endl;
	x=addOne(&x);
	cout<<x<<endl;
	return 0;
}