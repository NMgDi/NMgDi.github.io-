#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long int i;
	double pi,sum,term;
	sum=1,i=1;
	do
	{
		i+=1;
		term=1.0/(i*i);
		sum+=term;
		}while(term>=1.0e-12);
	pi=sqrt(sum*6);
	cout<<"pi="<<pi<<endl;
	return 0;
}