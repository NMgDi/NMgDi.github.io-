#include<iostream>
using namespace std;
int main()
{
	unsigned int number;
	cin>>number;
	if(number<10){
	cout<<"1"<<":"<<number%10<<" ";


	}
		else if(number<100)
		{cout<<"10"<<":"<<number/10%10<<" ";
								cout<<"1"<<":"<<number%10<<" ";


	}
		else if(number<1000){
		cout<<"100"<<":"<<number/100%10<<" ";
						cout<<"10"<<":"<<number/10%10<<" ";
								cout<<"1"<<":"<<number%10<<" ";



	}
		else if(number<10000){

			cout<<"1000"<<":"<<number/1000%10<<" ";
					cout<<"100"<<":"<<number/100%10<<" ";
						cout<<"10"<<":"<<number/10%10<<" ";
								cout<<"1"<<":"<<number%10<<" ";

	
	}
		else if(number<100000){

		cout<<"10000"<<":"<<number/10000%10<<endl;
			cout<<"1000"<<":"<<number/1000%10<<" ";
					cout<<"100"<<":"<<number/100%10<<" ";
						cout<<"10"<<":"<<number/10%10<<" ";
								cout<<"1"<<":"<<number%10<<" ";
	
		}
		else{
			cout<<"a bad number"<<endl;
		}
	return 0;
}