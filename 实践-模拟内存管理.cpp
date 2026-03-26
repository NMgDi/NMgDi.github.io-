#include<iostream>
#include<vector>
using namespace std;
struct Planet{//use the structural body
	long long x,y,z;
};
long long get_abs(long long num){//to custom a absolute value function
	if(num<0){
		return -num;
	}
	return num;
}
long long calculate_total_time(Planet*p,int n,int target_index){
	long long current_time=0;
	//use the pointer to get the coordinate WHY&HOW
	long long X=p[target_index].x;
	long long Y=p[target_index].y;
	long long Z=p[target_index].z;
	//use your absolute value function to calculate the disdance
	for(int i=0;i<n;i++){
		long long dx=get_abs(p[i].x-X);
		long long dy=get_abs(p[i].y-Y);
		long long dz=get_abs(p[i].z-Z);
		current_time+=(dx+dy+dz);//use+=to refresh the each time instead of saving the instant consequence
	}
	return current_time;
}
int main()
{
	int N;
	cin>>N;
	vector<Planet>planet(N);//create serveral divided structural bodies into the vector arry
	//"N" just means how many structural bodies the vector arry has
	for(int i=0;i<N;i++){
		cin>>planet[i].x>>planet[i].y>>planet[i].z;
	}
	Planet*p=planet.data();//get the pointer of the vector arry to fit the distance-calculating function
	long long min_time=-1;
	for(int i=0;i<N;i++){
		long long current_time=calculate_total_time(p,N,i);
		//exchange to find the minimum time instead of recording them and then compare them
		if(min_time==-1||current_time<min_time){
		min_time=current_time;
		}
	}
	cout <<min_time<<endl;
	return 0;
}