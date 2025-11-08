#include<iostream>
using namespace std;
int main()
{
	int x=4,y=6,z=8;
	int m=1,p=1,q=1;
	int s;
	
	for(int i=1;i<=4&&x>0;i++)
	{
		m*=x;
		x--;
	}
	for(int i=1;i<=6&&y>0;i++)
	{
		p*=y;
		y--;
	}
	for(int i=1;i<=8&&z>0;i++)
	{
		q*=z;
		z--;
	}
	s=m+p+q;
	cout<<"s=4!+6!+8!="<<s<<endl;
	return 0;
}