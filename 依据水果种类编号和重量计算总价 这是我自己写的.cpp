#include<iostream>
using namespace std;
int main()
{
	int number;
	double weight,price;
	cin>>number>>weight;
	switch(number)
	{	case 1:price=12.5*weight;
			cout<<price<<endl;
			break;
		case 2:price=20.50*weight;
				cout<<price<<endl;
				break;
		case 3:price=10.40*weight;
				cout<<price<<endl;
				break;
		case 4:price=17.50*weight;
		cout<<price<<endl;
		break;
		default:cout<<"none"<<endl;
		
	}
	return 0;
}