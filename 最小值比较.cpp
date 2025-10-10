#include <iostream>
using namespace std;
int main()
{
 int a,b,c;
 cin >>a>>b>>c;
 
 int min_val=(a<b)?((a<c)?a:c):((b<c)?b:c);
 cout<<min_val<<endl;
 
 
return 0;
}
