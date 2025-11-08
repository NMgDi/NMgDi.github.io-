#include<iostream>
using namespace std;
double volume(double r,double h){
	double v=3.14*r*r*h;
	return v;
}
int main(){
	double vol1,vol2;
	vol1=volume(2,3);
	cout<<"Volume1="<<vol1<<endl;
	vol2=volume(40,20);
	cout<<"Volme2="<<vol2<<endl;
	return 0;
}