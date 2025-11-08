#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int x;
	
	for(int i=1;;i++){
		int m=pow(10,i);
		if(num<m){
			return 0;
		}else{
			int q=num%m;
				q*(2*(m-1));
				x+=q;
				
		}
	}
	cout<<x<<endl;
	return 0;
}