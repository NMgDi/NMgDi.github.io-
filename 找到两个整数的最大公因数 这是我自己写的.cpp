#include<iostream>
using namespace std;
int main()
{	int m,n;
	int max,min;
	cin>>m>>n;
	if(m>=n){
		max=m;
		min=n;
	}else{
		max=n;
		min=m;
	}
	for(int k=min;k>0;k--){
		if(min%k==0&&max%k==0)
		{
		cout<<k<<endl;
	
		break;
	}
	}
	return 0;
}

