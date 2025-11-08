#include<iostream>
using namespace std;
double findMax(double a,double b){
		if(a>b){
			return a;
		}else{
			return b;
		}
	}
int main()
{
	double max1,max2;
	max1=findMax(2,3);
	cout<<"Max1="<<max1<<endl;
	max2=findMax(40,20);
	cout<<"Max2="<<max2<<endl;
	return 0;
}