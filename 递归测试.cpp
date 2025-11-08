#include<iostream>
using namespace std;
void print(int value){
	cout<<value<<endl;
	if(value==1){
	}else{
		print(value-1);
	}
}
int main()
{
	print(5);
	return 0;
}