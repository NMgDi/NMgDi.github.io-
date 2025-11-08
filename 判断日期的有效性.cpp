#include<iostream>
using namespace std;
int main()
{
	int month,days;
	
	cout<<"the month is ";
	cin>>month;
	cout<<"the days are ";
	cin>>days;
	
	if(month<1||month>12){
		cout<<"invalid"<<endl;
		return 0;
	}
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(days>=1&&days<=31){
				cout<<"valid"<<endl;
			}
			else{
				cout<<"inavlid"<<endl;
			}
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			if(days>=1&&days<=30)
			 	cout<<"valid"<<endl;
			else{
				cout<<"invalid"<<endl;
			}
			break;
		
		case 2:
			if(days>=1&&days<=29){
			cout<<"valid"<<endl;
			}
			else{
				cout<<"invalid"<<endl;
			}
			break;
		
		default:cout<<"inavid"<<endl;
		
	}
	return 0;
}
