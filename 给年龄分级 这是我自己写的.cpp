#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	if(age<=0){
		cout<<"invalid"<<endl;
	}else if(age>0&&age<16){
		cout<<"I am a child!"<<endl;
	}else if(age>=16&&age<=55){
		cout<<"I am an adult!"<<endl;
	}else{
		cout<<"I am an old!"<<endl;
	}
	return 0;
}