#include<iostream>
using namespace std;
double add1(double x,double y){
	return (x+y);
}
double add2(int i,int j){
	return (i+j);
}
int main()
{
	double a,b,c;
	cin>>a>>b;
	c=add1(a,b);
	cout<<"c1="<<c<<endl;
	c=add2(1/a,1/b);
	cout<<"c2="<<c<<endl;
}