#include <iostream>
#define ZERO ((Xstate[0] || Ostate[0])?((Xstate)?("X"):("O")):"0")
#define FIRST ((Xstate[1] || Ostate[1])?((Xstate)?("X"):("O")):"1")
#define SECOND ((Xstate[2] || Ostate[2])?((Xstate)?("X"):("O")):"2")
#define THIRD ((Xstate[3] || Ostate[3])?((Xstate)?("X"):("O")):"3")
#define FOURTH ((Xstate[4] || Ostate[4])?((Xstate)?("X"):("O")):"4")
#define FIFTH ((Xstate[5] || Ostate[5])?((Xstate)?("X"):("O")):"5")
#define SIXTH ((Xstate[6] || Ostate[6])?((Xstate)?("X"):("O")):"6")
#define SEVENTH ((Xstate[7] || Ostate[7])?((Xstate)?("X"):("O")):"7")
#define EIGHTH ((Xstate[8] || Ostate[8])?((Xstate)?("X"):("O")):"8")
using namespace std;
bool Xstate[9] = {0}, Ostate[9] = {0}, chance = 0;

void PrintBoard()
{
    cout << " "<<ZERO<<" | "<<FIRST <<" | "<<SECOND<< endl;
    cout << "---|---|--- " << endl;
    cout << " "<<THIRD<<" | "<<FOURTH <<" | "<<FIFTH<< endl;
    cout << "---|---|--- " << endl;
    cout << " "<<SIXTH<<" | "<<SEVENTH<<" | "<<EIGHTH<< endl;
}