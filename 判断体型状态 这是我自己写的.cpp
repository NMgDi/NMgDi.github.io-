#include<iostream>
using namespace std;
int main()
{
	double weight,hight;
	cin>>weight>>hight;
	double std_weight=hight-110;
	if(weight>std_weight+5){
		cout<<"fat"<<endl;
	}else if(weight<std_weight-5){
		cout<<"thin"<<endl;
	}else{
		cout<<"good"<<endl;
	}
		
		
	
	return 0;
}