#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student{
	public:
		int num;
		string student_name;
	Student(int numm,string namee){
		num=numm;
		student_name=namee;
		}
	};
class Major{
	public:
		vector<int>student_ids;//not to definite string names;
		string major_name;
	Major(string major_namee){
		major_name=major_namee;
	}
};
int main()
{
	vector<Student>student;
	vector<Major>major;
	
	string op;
	while(cin>>op){
		int current_students=student.size();
		int current_majors=major.size();
		if(op == "e"){
			break;
		}
		else if(op=="s"){
			string student_name;
			cin>>student_name;
			student.push_back(Student(current_students,student_name));
			// cin>>student[n].student_name is not allowed;
		}
		else if(op=="n"){
			for(int i=0;i<student.size();i++){
				cout<<i<<"-"<<student[i].student_name;
				if(i != (int)student.size() - 1){
					cout << " ";//optimize the blankspaces
				}
			}
			cout<<endl;
		}
		else if(op=="m"){
			string major_name;
			cin>>major_name;
			major.push_back(Major(major_name));
		}
		else if(op=="a"){
			int s_id,m_id;
			cin>>s_id>>m_id;
			if(s_id>=0&&s_id<student.size()&&m_id>=0&&m_id<major.size()){
				major[m_id].student_ids.push_back(s_id);
			}
		}
		else if(op=="d"){
			int s_id,m_id;
			cin>>s_id>>m_id;
			if(s_id>=0&&s_id<student.size()&&m_id>=0&&m_id<major.size()){
				vector<int>&ids=major[m_id].student_ids;
				for(int i = ids.size()-1; i>=0; i--){
                    if(ids[i] == s_id){
                        ids.erase(ids.begin()+i);
                        break;
					}
				}
			}
		}
		else if(op=="v"){
			int old_m,new_m,s_id;
			cin>>old_m>>s_id>>new_m;
			if(old_m>=0&&old_m<major.size()){
				vector<int>& ids=major[old_m].student_ids;
				for(int i=ids.size()-1;i>=0;i--){
					if(ids[i]==s_id){
						ids.erase(ids.begin()+i);
						break;
					}
				}
			}
			if(new_m>=0&&new_m<major.size()&&s_id>=0&&s_id<student.size()){
			major[new_m].student_ids.push_back(s_id);
			}
		}
		else if(op=="l"){
			for(int k=0;k<major.size();k++){
				cout<<"Major"<<" "<<k<<"-"<<major[k].major_name<<":";
				for(int i=0;i<major[k].student_ids.size();i++){
					int s_id=major[k].student_ids[i];
					cout<<" "<<s_id<<"-"<<student[s_id].student_name;
				}
				cout<<endl;
			}
		}
	}
	return 0;
}