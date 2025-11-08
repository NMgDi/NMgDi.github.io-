#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int number;
	for(int i=1;i<100;i++){
		if(number%2==1){
			sum+=number;
		}
		cout<<sum<<endl;
	}
	return 0;
}