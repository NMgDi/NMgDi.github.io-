#include<iostream>
using namespace std;
int main()
{
	int year,month,day;
	cin>>year>>month>>day;
	int days_of_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int total=0;
	
	for(int i=0;i<month-1;i++){
		total=total+days_of_month[i];
	}
	total=total+day;
	
	if((year%4==0&&year&100!=0)||year%400==0){
		total+=1;
	}
	cout<<total<<endl;
	
	return 0;
}