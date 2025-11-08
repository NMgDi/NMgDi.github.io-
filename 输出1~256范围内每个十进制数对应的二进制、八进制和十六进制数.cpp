#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;
int main()
{
	cout<<setw(10)<<"decimal"<<setw(10)<<"binary"<<setw(10)<<"octal"<<setw(15)<<"hexadecimal"<<endl;
	cout<<string(45,'——')<<endl;
	//设置循环次数
	for(int i=1;i<=245;i++){
	//十进制
	cout<<setw(1)<<dec<<i;
	//二进制
	cout<<setw(10)<<bitset<2>(i);
	//八进制
	cout<<setw(10)<<oct<<i;
	//十六进制
	cout<<setw(10)<<hex<<i<<endl;
	//恢复十进制
	cout<<dec;
}
	return 0;
}