#include<iostream>
using namespace std;
int main()

{


cout << "enter the intial velocity (v0)" << "\n";
double v0;
cin >> v0;

cout << " enter the final velocity (v1)" << "\n";
double v1;
cin >> v1;

cout << " enter the time (t)" << "\n";
double t;
cin >> t;

    // Calculate the average acceleration

        double Average_Acceleration = (v1 - v0) / t;


        cout << " Average acceleration = " << Average_Acceleration << "\n";


    return 0;
}