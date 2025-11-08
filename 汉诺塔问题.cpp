#include<iostream>
using namespace std;
void hanoi(int n,char start,char target,char help){
	if(n==1){
		cout<<start<<" to "<<target<<endl;
		return;
	}
	hanoi(n-1,start,help,target);
	cout<<start<<" to "<<target<<endl;
	hanoi(n-1,help,target,start);
	
}
int main()
{	
	int n;
	cin>>n;
	hanoi(n,'A','C','B');
	return 0;
}