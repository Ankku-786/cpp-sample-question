// A cricketer is playing the next game, we need to  congratulate him, if he is playing his 100th game. Ask the user to enter number of games played, if the next game is 100th game print "congratulation"


#include<iostream>
using namespace std;
int main()

{



    int game_played;
    cout << "enter the game played" << "\n";
    cin >> game_played;


    // condition

    if ( game_played == 99 )
    { 
       cout << " congratulations " << "\n";
    }
    
}