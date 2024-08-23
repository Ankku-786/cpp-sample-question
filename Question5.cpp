#include <iostream>
using namespace std;
int main()
{

 //step1 - accept numerator
 cout << "enter the numerator" << "\n";
 int numerator
 cin >> numerator;

 //step2 - accept denominator 
 cout << "enter the denominator" << "\n";
 int denominator
 cin >> denominator;

 //step - 
 cout << "enter the remainder" << "\n";
 int remainder
 cin >> remainder;

 //step4 perform modulo division
 int quotient = numerator  / denominator;

 //step5 print output
 cout << "remainder = " <<  quotient << "\n";
 
 
 

return 0;

}