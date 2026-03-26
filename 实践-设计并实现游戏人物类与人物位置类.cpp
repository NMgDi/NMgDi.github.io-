//class Point2D,int x,y,point
//class Creature,string name,int ID, position /creature
//vector<creature>-
//string op;
//if(op=="  ")
//else if
//【n】Mike->creature.name int m,int n,->.position,
//for(),.size(),push_back(size,name)
//  s  cin>>current_id,cout<<creature[2].name;
//  a  for(int i=0;i<arr_creature.size();i++),cout<<
//  m  
//  e  return 0;
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Point2D{
	public:
		int x;
		int y;
	Point2D(int xx,int yy){
		x=xx;
		y=yy;
	}
	
};
class Creature{
	public:
		string creature_name;
		int creature_ID;
		Point2D position;//create an object of Point2D
	Creature(string name,int ID,int m,int n):creature_name(name),creature_ID(ID),position(m,n){
	}//when the object is not initialized,u should use this initialized list
};
int main(){
	vector<Creature>creature;
	vector<Point2D>position;
	string op;
	while(cin>>op){
		if(op=="n"){
			string name;
			int m,n;
			cin>>name>>m>>n;
			int new_id = creature.size();
			creature.push_back(Creature(name,new_id,m,n));//Creature<<=>>Creature creature
			//only the arries can invoke the push_back()
		}
		else if(op=="a"){
			for(int i=0;i<creature.size();i++){
				cout<<"No. "<<i<<" creature "<<creature[i].creature_name<<" is at "<<"("<<creature[i].position.x<<", "<<creature[i].position.y<<")"<<endl;
			}
		}
		else if(op=="m"){
			int num;
			int new_x;
			int new_y;
			cin>>num>>new_x>>new_y;
			creature[num].position.x=new_x;//position.x is not allowed,only through the creature is allowed
			creature[num].position.y=new_y;
		}
		else if(op=="s"){
			int pointed_num;
			cin>>pointed_num;
			cout<<"No. "<<creature[pointed_num].creature_ID<<" creature "<<creature[pointed_num].creature_name<<" is at "<<"("<<creature[pointed_num].position.x<<", "<<creature[pointed_num].position.y<<")"<<endl;
		}
		else if(op=="e"){
			break;
		}
	}
	return 0;
}