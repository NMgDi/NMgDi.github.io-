#include<iostream>
using namespace std;
int main()
{
	int n=5,m=10;
	int a,c;
	a=n++;
	c=++n;
	cout<<a<<" "<<c<<" "<<n<<endl;
	return 0;
}