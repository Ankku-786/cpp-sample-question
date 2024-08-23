#include<iostream>
using namespace std;
int main()

{   
    cout << "enter the weight of water" << "\n";
    float weight_water;
    cin >> weight_water;


    cout << "enter initial temperature" << "\n";
    float initial_temperature;
    cin >> initial_temperature;


    cout << " enter final temperature" << "\n";
    float final_temperature;
    cin >> final_temperature;


    float energy = weight_water * ( final_temperature - initial_temperature ) * 4184;


    cout << "the energy needed = " << energy << "\n";




    return 0;
}