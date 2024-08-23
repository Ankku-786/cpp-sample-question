#include<iostream>
using namespace std;
int main()

{

    cout << "enter the balance" <<  "\n";
    double balance;
    cin >> balance;


    cout << "enter the annual interest rate" << "\n";
    double annual_interest_rate;
    cin >> annual_interest_rate;


    double interest = balance * ( annual_interest_rate / 1200 );


    cout << " interest for the next month = " << interest << "\n";



    return 0;
}