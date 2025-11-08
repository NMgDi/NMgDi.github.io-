#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int number=1;
	for(int i=1;i<100;i++){
		if(number%2!=0){
			sum=sum+number;
		}
		number++;
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}