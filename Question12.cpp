#include<iostream>
using namespace std;
int main()

{

    cout << "enter the number 1" << "\n";
    float number1;
    cin >> number1;

    cout << "enter number 2" << "\n";
    float number2;
    cin >> number2;

    float multiplication = number1 * number2;
    float division = number1 / number2;

    cout << "multiplication = " << multiplication <<"\n" << "division = " << division << "\n";


    return 0;
}