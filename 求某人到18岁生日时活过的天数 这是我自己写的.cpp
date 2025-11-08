#include<iostream>
using namespace std;
int main()
{
	int year,month,days;
	int main,add;
	cin>>year>>month>>days;
	if(year>=2008){
		cout<<"-1"<<endl;
	}else{
		for(int p_year=year;p_year<year+18;p_year++){
			if((p_year%4==0&&p_year%100==0)||p_year%400==0){
				p_year=366;
			}else{
				p_year=365;
			}
			main+=p_year;
		}
			int std_month[12]={31,30,31,30,31,30,31,31,30,31,30,30};
			add+=month;
			for(int p_year=year;p_year<year+18;p_year++){
			
				if((p_year%4==0&&p_year%100==0)||p_year%400==0){
					add=add+1;
				}
		}
				
		days=main+add;
		}
	cout<<days<<endl;
	
	return 0;
}