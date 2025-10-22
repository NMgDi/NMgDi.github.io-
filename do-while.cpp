#include<iostream>
using namespace std;
int main()
{
	int number;
	do{
		cin>>number;
	}while(number<1||number>10);
	
	cout<<number<<endl;
	return 0;
}