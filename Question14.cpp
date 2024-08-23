#include<iostream>
using namespace std;
int main()
{

cout << "enter the length of rectangle" << "\n";
double length;
cin>> length;

cout << "enter the breadth of rectangle" << "\n";
double breadth;
cin >> breadth;

double area_of_rectangle = length * breadth;
double perimeter_of_rectangle = 2 * length + breadth;

cout << "area of rectangle = " <<  area_of_rectangle << "\n";
cout << "perimeter of rectangle = " << perimeter_of_rectangle << "\n";


    return 0;
}