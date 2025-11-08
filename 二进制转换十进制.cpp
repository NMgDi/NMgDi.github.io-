#include<iostream>
using namespace std;
int main()
{
	char ch;
	int decimal=0;
	
	while(cin>>ch&&ch!='#'){
		int digit=ch-'0';
		decimal=decimal*2+digit;
	}
	return 0;
}