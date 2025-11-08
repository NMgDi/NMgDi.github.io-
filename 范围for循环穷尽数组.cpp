#include<iostream>
using namespace std;
int main()
{
	int scores[5]={34,54,23,65,87};
	cout<<"all the scores are ";
	for(int score:scores){
		cout<<score<<" "<<endl;
	}
	return 0;
}