#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string>courses;
	vector<int>nums;
	string op;//char is also ok,but string is good for changing like c->create
	while(cin>>op){
		if(op=="c"){
		string course;
		int num;
		cin>>course>>num;
		courses.push_back(course);
		nums.push_back(num);
		}
		else if(op=="s"){
			for(int i=0;i<courses.size();i++){
				cout<<"Course"<<" ";
				cout<<i<<'-'<<courses[i]<<" "<<"has prerequisites:";
				int current_num=i;
				bool flag=false;
				while(nums[current_num]!=-1){
						int next_num=nums[current_num];
						cout<<" "<<courses[next_num];
						current_num=next_num;
						flag=true;
					}
				if(!flag){
						cout<<" "<<"none";
					}
				cout<<endl;
				}
			}
		}
	return 0;
}
