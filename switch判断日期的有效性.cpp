#include<iostream>
using namespace std;
int main()
{
	int month,days;
	cout<<"the month is";
	cin>>month;
	cout<<"the days are";
	cin>>days;
	switch(month,days)
	{	case(1,1<=days&&days<=31):
		case(3,1<=days&&days<=31):
		case(5,1<=days&&days<=31):
		case(7,1<=days&&days<=31):
		case(8,1<=days&&days<=31):
		case(10,1<=days&&days<=31):
		case(12,1<=days&&days<=31):cout<<"valid";
		case(4,1<=days&&days<=30):
		case(6,1<=days&&days<=30):
		case(9,1<=days&&days<=30):
		case(12,1<=days&&days<=30):cout<<"valid";
		case(2,(1<=days&&days<=29)||(1<=days&&days<=28):cout<<"valid";
		default:cout<<"invalid"<<endl;
	
	}
	retrun 0;
}