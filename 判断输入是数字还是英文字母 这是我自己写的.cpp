#include<iostream>
using namespace std;
int main()
{
	char x;
	cin>>x;
	while(x)
	{
	if(x>='A'&&x<='Z'){
		cout<<"char"<<endl;
	}else if(x>='0'&&x<='9')
	{
		cout<<"digit"<<endl;
	}else{
		cout<<"other"<<endl;
	}
	return 0;
	}
}