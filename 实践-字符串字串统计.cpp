#include<iostream>
#include<string>//in case that the space exists
using namespace std;
int main()
{
	
	string s_main,s_sub;
	if(!getline(cin,s_main)){//in case the main string is "0"
		return 0;
	}
	if(!getline(cin,s_sub)){//in case the sub string is "0"
		return 0;
	}
    if (s_sub.empty()) {//a function for selfcheck,if 0->true,if not 0->false
        cout << 0 << endl;
        return 0;
    }
	const char*pMain=&s_main[0];//initialize the pointer for each one
	const char*pSub=&s_sub[0];
	
	size_t lenSub=s_sub.length();//size_t 是一个无符号整数类型，专门用来表示“大小”或“数量”。
	int count=0;
	const char*p=pMain;//the line35,u shouldnt change the pMain,so create a substitute to realize ++
	//mainbody:
	while(*p!='\0'){
		const char*tempP=p;//copy the location of the original pointor to move it,it is created to be changed only
		const char*tempQ=pSub;//same as above
		size_t matched =0;
		while(*tempP!='\0'&&*tempQ!='\0'&&*tempP==*tempQ){//to match all the letters one by one
			tempP++;//to move it searching one by one
			tempQ++;//same as above
			matched++;//to record how many letter is matched so far
		}
		if(matched==lenSub){//if all the letters are matched
		count++;
		}
		p++;//move to the next letter in the main string to find the matched strings one letter after one
	}
	cout<<count<<endl;
	return 0;
}