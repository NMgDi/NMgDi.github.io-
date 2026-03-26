#include<iostream>
#include<cstring>
using namespace std;
	const int maxn = 5000;//the longest digit of the num
	const int maxn2 = maxn * 2;//the longest digit of the num when multiply
	int read_str(char *s,int *a){
		int n = strlen(s);
    	for (int i = 0; i < n; ++i)
    {
        a[i] = s[n - i - 1] - '0';
    }
    return n;
	}
int main(int argc, char *argv[]) 
{
    char s[maxn];//to save the input nums
    int a[maxn2], b[maxn2], c[maxn2];//the first num,the second num,the consequence
    int n1, n2;//the digits of the first num,and the second num
	cin >> s;
    n1 = read_str(s, a);//get the digits of the first num while initialize the array a
    cin >> s;
    n2 = read_str(s, b);//get the digits of the second num
    
    for (int i = 0; i < n1 + n2; ++i){
	c[i] = 0;//initialize the array c
	}
    for (int i = 0; i < n1; ++i){
    	for (int j = 0; j < n2; ++j){
            c[i+j] += a[i]*b[j];//the i=0,is the units digit
        }
	}
	//from the individual digit into the complete num
    for (int i = 0, m = 0; i < n1 + n2; ++i)
    {
        c[i] += m;//add the carry bit,c[0]=35,c[1]=72,c[1]=c[1]+5=77
        m = c[i] / 10;//get the new carry bit,m=3,m=7
        c[i] %= 10;//save the current digit,c[0]=5,c[1]=7
    }

    int n = n1 + n2 - 1;//to see the current digits
    while(n>0&&c[n]==0){
    	n--;
	}
	for (; n>=0; --n){//to find the true highest digit,cuz when it c[n]==0 is false, the circulation will be paused,it is just like the "while" 
	    //print it out from the last and the highest digit
        	cout<<c[n];
		}
	cout<<endl;
    return 0;
}