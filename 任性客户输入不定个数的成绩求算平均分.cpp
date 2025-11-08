#include<iostream>
using namespace std;
int main()
{
	int studentCount;
	cout<<"how many students ";
	cin>>studentCount;
	
	if(studentCount<1||studentCount>100){
		cout<<"invalid"<<endl;
		return 0;
	}
	
	int scores[100];
	
	cout<<"tell me their scores ";
	for(int i=0;i<studentCount;i++){
		cin>>scores[i];
	}
	
	double sum=0;
	for(int i=0;i<studentCount;i++){
		sum=sum+scores[i];
	}
	double average=sum/studentCount;
	cout<<average<<endl;
	
	return 0;
}