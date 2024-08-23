#include<iostream>
using namespace std;
int main()

{
  cout << "enter the length of rectangle" << "\n";
  int length;
  cin >> length;


  cout << "enter the breadth of rectangle" << "\n";
  int breadth;
  cin >> breadth;

  int area_of_rectangle = length * breadth;
  int perimeter_of_rectangle = 2 * ( length + breadth );


  cout << "area of rectangle = " << area_of_rectangle  << "\n";
  cout << "perimeter of rectangle = " << perimeter_of_rectangle << "\n";




    return 0;
}