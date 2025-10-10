#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "input the number: ";
    cin >> num;
    
   
    int tens_digit = num / 10;     
    int units_digit = num % 10;    
    int reverse_value = units_digit * 10 + tens_digit;
    
    
    cout << "the reverse value of " << num << " is: " << reverse_value << endl;
    
    return 0;
}