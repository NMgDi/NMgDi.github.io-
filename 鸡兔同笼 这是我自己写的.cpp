#include<iostream>
using namespace std;
int main()
{
	int head,feet,rabbit,chicken;
	cin>>head>>feet;
    chicken = (4 * head - feet) / 2;
    rabbit = head - chicken;
	cout<<"rabbit="<<rabbit<<","<<"chicken="<<chicken<<endl;
	return 0;
}