#include<iostream>
using namespace std;
int main()
{
	int x,w;
	cin>>x;
	if(x<=3){
		w=14;
	}else if(x>3){
		w=(x-3)*2+14;
	}
	cout<<w<<endl;
	return 0;
}