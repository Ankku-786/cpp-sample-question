#include<iostream>
using namespace std;
int main()

{

cout << "enter an integer  number1" << "\n";
int number1;
cin>>number1;

cout << "enter an integer number2" << "\n";
int number2;
cin>>number2;

cout << "enter an integer number3" << "\n";
int number3;
cin>>number3;


int sum = number1 + number2;
int subtraction = number3 - sum;

cout << "sum = " << sum << "\n";
cout << "subtraction = " << subtraction << "\n";



    return 0;
}