#include<iostream>
using namespace std;
void swap(int *ref1,int *ref2){
	int temp=*ref1;
	*ref1=*ref2;
	*ref2=temp;
	
}
int main()
{
	int a=3,b=8;
	swap(&a,&b);
	cout<<a<<b<<endl;
	return 0;
}