#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{	//输入n
	int n;
	cin>>n;
	//打印第一行，n个*,用string( , )

	//再打印n-2行个隔空行，用for，setw是n-2,
	for(int i=1;i<=(n-2);i++){
	cout<<'*'<<setw(n-1)<<'*'<<endl;
}
	//打印最后一行
	cout<<string(n,'*')<<endl;
	return 0;
}