#include<iostream>
using namespace std;
int main()
{
	int year,month,days;
	cout<<"the year is ";
	cin>>year;
	cout<<"the month is ";
	cin>>month;
	if(month<=1&&month>=12){
		cout<<"invalid"<<endl;}
	else if(year%4==0&&year%100!=0||year%400){
		case 2:cout<<"29"<<endl;
	}
	else{
		case (1):
		case (3):
		case (5):
		case (7):
		case (8):
		case (10):
		case (12):cout<<"31";break;
		
		case (4):
		case (6):
		case (9):
		case (12):cout<<"30";break;
		
		case (2):cout<<"28";break;
	}
	default:cout<<"invalid"<<endl;
}