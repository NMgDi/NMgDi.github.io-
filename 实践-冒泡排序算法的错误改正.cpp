#include <iostream>
#include <vector>
using namespace std;
const int maxn = 5000;
int a[maxn];

void swap(int &a, int &b) 
{
    a =a^b;//same->o,different->1
    b =b^a;
    a =a^b;
}

int main(int argc, char *argv[]) 
{
    int n;
    cin >> n;//to show how many nums
    if (n <= 0 || n > maxn) 
    {
        cout << "Invalid input array length:\n"
            "   must be in the range of 1 to "
            << maxn << endl;
    }

    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];//get the nums one by one
    }
	for(int i=0;i<n-1;i++){
		bool flag=false;
        for(int j=0;j<n-1-i;j++){
         if (a[j] > a[j+ 1]){
             swap(a[j], a[j+ 1]);
             flag=true;
			}	
		}if(!flag){
			break;
		}
    }


    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << (i < n - 1 ? ' ' : '\n');
    }
    return 0;
}