#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;
    double x1, x2;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    
    if (d == 0) {
        x1 = x2 = -b / (2.0 * a);
        cout << "x1=x2=" << x1 << endl;
    } else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2.0 * a);
        x2 = (-b - sqrt(d)) / (2.0 * a);
        cout << "x1=" << x1 << ", x2=" << x2 << endl;
    } else { // d < 0
        double jp = -b / (2.0 * a);
        double ip = sqrt(-d) / (2.0 * a);
        cout << "x1=" << jp << "+" << ip << "i" << endl;
        cout << "x2=" << jp << "-" << ip << "i" << endl;
    }
    
    return 0;
}