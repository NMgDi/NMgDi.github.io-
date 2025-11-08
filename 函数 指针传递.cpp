#include<iostream>
using namespace std;
void foo(int *y)
{
	*y=6;
}
int main()
{
	int x=5;
	cout<<"x="<<x<<endl;
	
	foo(&x);
	cout<<"x="<<x<<endl;
	return 0;
}