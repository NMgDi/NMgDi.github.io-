#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("chcp 65001>nul");
	double money,years,rate,sum;
	cout<<"请输入本金，存款年限和利息，用空格隔开"<<endl;
	cin>>money>>years>>rate;
	while(money>0)
	{
		sum=money*pow((1+rate),years);
		cout<<"本息共"<<endl;
		cout<<sum<<endl;
		cout<<"请输入本金，存款年限，爱输啥输啥吧"<<endl;
		cin>>money>>years>>rate;
	}
	return 0;
}