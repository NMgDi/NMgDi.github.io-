//数组计入数据，for循环cin[]，cout，if！（-3）=0，else if，cout（+7）
#include<iostream>
using namespace std;
void move(int *arry,int n,int m){
	//int n=10,m=3;
		for(int j=0;j<n;j++){
		if(!((j-m)<0)){
			cout<<arry[j-m]<<" ";
		}else{
			cout<<arry[j+n-m]<<" ";
		}
	}	
}
int main()
{
	int arr[10]={0};//initialize it to avoid rubbish data
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int *p=arr;
	move(p,10,3);
	return 0;
}