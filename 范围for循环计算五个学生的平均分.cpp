#include<iostream>
using namespace std;
int main()
{
	double scores[5]={45,765,23,7654,1234};
	double sum=0.0;
	for(double score:scores){
		sum=sum+score;
	}
	double average=sum/5;
	cout<<"the sum is "<<sum<<endl;
	cout<<"the average is "<<average<<endl;
	return 0;
}