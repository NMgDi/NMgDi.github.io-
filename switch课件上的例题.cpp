#include<iostream>
using namespace std;
int main()
{
	char grade;
	cin>>grade;
	switch(grade)
	{	case('a'):
		case('A'):cout<<"90_100\n";break;
		case('b'):
		case('B'):cout<<"80_90\n";break;
		case('c'):
		case('C'):cout<<"70_80";break;
		default:cout<<"error";
	}
	return 0;
}