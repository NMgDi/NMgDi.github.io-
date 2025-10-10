#include<iostream>
using namespace std;
int main()
{
	char name1[50],name2[50];
	
	cin.getline(name1,50);
	cin.getline(name2,50);
	
	cout<<"###################"<<endl;
	cout<<"Dear "<<name1<<endl;
	cout<<endl;
	cout<<"Good Morning"<<endl;
	cout<<endl;
	cout<<"Yous sincerely "<<name2<<endl;
	cout<<"###################"<<endl;
	return 0;
}