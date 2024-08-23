#include<iostream>
using namespace std;
int main()

{
// Declare variables for radius, length, area, and volume

     double radius,length ,area, volume;

    // Prompt the user to enter the radius and length of the cylinder
    
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;


    
    cout << "Enter the length of the cylinder: ";
    cin >> length;

    // Calculate the area 

     area =  radius * radius * 3.14;

    // Calculate the volume 


     volume = area * length;

    // Display the area and volume
    cout << " area  " << area << "\n";
    cout << " volume  " << volume << "\n";

    return 0;
}