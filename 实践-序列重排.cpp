#include<iostream>
#include<vector>
using namespace std;
int Func(int *A,int nSize){
	//move all the numbers that not '0' to the top instead of moving all the '0' to the end
	int k=0;
	for(int i=0;i<nSize;i++){
		if(A[i]!=0){
		A[k]=A[i];
		k++;	
		}
	}
	//and set the rest into '0'
	for(int n=k;n<nSize;n++){
		A[n]=0;
	}
	//set the order
	for(int i=0;i<k-1;i++){
		for(int j=0;j<k-i-1;j++){
			if(A[j]<A[j+1]){
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	return k;
}
int main()
{
	vector<int>nums;
	int num;
	while(cin>>num){
		nums.push_back(num);	
	}
	 if (nums.empty()) {
     return 0;
    }
	int length=nums.size();
	int *A=nums.data();//nums.data()作用:返回一个指向vector内部第一个元素的原始指针，返回值类型是"<>"*
	//对于普通数组 arr，arr 这个名字直接代表地址。
	//对于 vector，nums 这个名字代表对象本身，地址藏在它肚子里，必须用 .data() 或 &...[0] 掏出来。
	Func(A,length);
	for(int i=0;i<length;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	cout<<Func(A,length);
	return 0;
}