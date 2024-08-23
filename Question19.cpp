#include<iostream>
using namespace std;
int main()

{

  cout << "enter the side of square" << "\n";
  int side;
  cin >> side;
  

  int area_of_square = side * side;
  int perimeter_of_sqaure = 4 * side;


  cout << " area of square = " << area_of_square << "\n";
  cout << " perimeter of sqaure = " <<  perimeter_of_sqaure;


    return 0;
}