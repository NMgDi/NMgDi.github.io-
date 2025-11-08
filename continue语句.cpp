#include<iostream>
using namespace std;
int main()
{
	int count=0;
	do{
		if(count==5){
			continue;
		}
		cout<<count<<" ";
	}while(++count<10);
	return  0;
}