#include<iostream>
using namespace std;
int fun(int b[],int m,int n)
{
	int i,s=0;
	for(i=m;i<m+n;i++)
	s+=b[i];
	return s;
}
int main()
{	int x,a[]={0,1,2,3,4,5,6,7,8,9};
	x=fun(a,0,10);
	cout<<x<<endl;
	x=fun(a,3,5);
	cout<<x<<endl;
	return 0;
}