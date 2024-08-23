#include<iostream>
using namespace std;
int main()

{

cout << "enter the dividend" << "\n";
int dividend;
cin >> dividend;


cout << "enter the divisor" << "/n";
int divisor;
cin >> divisor;

// Calculate the remainder

int remainder = dividend % divisor;

cout << " remainder = " << remainder << "\n";
    
    
    
    return 0;
}