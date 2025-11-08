#include<iostream>
using namespace std;
void sort(int b[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(b[j]>b[j+1]){
				int temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
}
int main()
{
	int x,b[]={9,6,8,3,6,6,2,1,7};
	int x=sort(b,9);
	cout<<x<<endl;
	return 0;
}