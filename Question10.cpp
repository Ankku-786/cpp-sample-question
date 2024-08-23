#include<iostream>
using namespace std;
int main()

{
    cout << "enter the numerator" << "\n";
    int numerator;
    cin >> numerator;

    cout << "enter the denominator" << "\n";
    int denominator;
    cin >> denominator;

    int Remainder = numerator / denominator;

    cout << "Remainder = " << Remainder << "\n";



    return 0;


}