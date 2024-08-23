#include<iostream>
using namespace std;
int main()
{
 
 cout << "enter_number 1  " << "\n";
 int number1 = 10;
 cin>>number1;

 cout << "enter_number 2   " << "\n";
 int number2 = 20;
 cin>>number2;

 cout << "enter_number 3  " << "\n";
 int number3 = 5;
 cin>>number3;

 cout << "enter_number 4   " << "\n";
 int  number4 = 10;
 cin>>number4;

 cout << "enter_number 5  " << "\n";
 int number5 = 2;
 cin>>number5;


 cout<< "Number 1 =  " << number1 << "\n";
 cout<< "Number 2 = " << number2 << "\n";
 cout<< "Number 3 =  " << number3 << "\n";
 cout<< "Number 4 =  " << number4 << "\n";
 cout<< "Number 5 =  " << number5 << "\n";
    


 int result = number1 + number2 - number3 * number4 / number5;

 cout << "number1" << " + " << "number2" << " - " << "number3" << " * " << "number4" << " / " << "number5" << " = " << "result" << "\n";


    return 0;
}