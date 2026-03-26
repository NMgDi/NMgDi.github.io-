#include<iostream>
#include<string>
#include<vector>
using namespace std;
class MyStack{
private:
	vector<int>m_array;
	int m_size=0;
public:
	bool push(){
		int num;
		cin>>num;
		if(m_array.size()>=10){
			return false;
		}else if(m_array.size()<10){
			m_array.push_back(num);
			return true;
		}
	}
	bool pop(){
		if(m_array.size()!=0){
			m_array.pop_back();
			return true;
		}else{
			cout<<"Can not pop empty stack"<<endl;
			return false;
		}
	}
	void print(){
		if(m_array.size()<=0){
		}else{
			cout<<"( ";
			for(int i=0;i<m_array.size();i++){
				cout<<m_array[i]<<" ";
			}
			cout<<")"<<endl;
		}
	}
};
int main()
{
	MyStack stack;
	string op;
	while(cin>>op){
		if(op=="i"){
			stack.push();
		}
		else if(op=="o"){
			if(stack.pop()==false){
				return 0;
			}
		}
		else if(op=="s"){
			stack.print();
			return 0;
		}
	}
	return 0;
}