#include<iostream>
using namespace std;
void addOne(int &a){
	a+=1;
}

int main()
{
	int x=0;
	cout<<x<<endl;
	addOne(x);
	cout<<x<<endl;
	return 0;
}