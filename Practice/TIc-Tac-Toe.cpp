#include <iostream>
#define ZERO ((Xstate[0] || Ostate[0]) ? ((Xstate[0]) ? ("X") : ("O")) : "0")
#define FIRST ((Xstate[1] || Ostate[1]) ? ((Xstate[1]) ? ("X") : ("O")) : "1")
#define SECOND ((Xstate[2] || Ostate[2]) ? ((Xstate[2]) ? ("X") : ("O")) : "2")
#define THIRD ((Xstate[3] || Ostate[3]) ? ((Xstate[3]) ? ("X") : ("O")) : "3")
#define FOURTH ((Xstate[4] || Ostate[4]) ? ((Xstate[4]) ? ("X") : ("O")) : "4")
#define FIFTH ((Xstate[5] || Ostate[5]) ? ((Xstate[5]) ? ("X") : ("O")) : "5")
#define SIXTH ((Xstate[6] || Ostate[6]) ? ((Xstate[6]) ? ("X") : ("O")) : "6")
#define SEVENTH ((Xstate[7] || Ostate[7]) ? ((Xstate[7]) ? ("X") : ("O")) : "7")
#define EIGHTH ((Xstate[8] || Ostate[8]) ? ((Xstate[8]) ? ("X") : ("O")) : "8")
using namespace std;
bool Xstate[9] = {0}, Ostate[9] = {0}, chance = 1;

void PrintBoard()
{
    cout << " " << ZERO << " | " << FIRST << " | " << SECOND << endl;
    cout << "---|---|--- " << endl;
    cout << " " << THIRD << " | " << FOURTH << " | " << FIFTH << endl;
    cout << "---|---|--- " << endl;
    cout << " " << SIXTH << " | " << SEVENTH << " | " << EIGHTH << endl;
}
bool CheckEmpty(int input)
{
    if (Xstate[input] == 0 && Ostate[input] == 0)
        return 1;
}
bool CheckWin()
{
    if (chance)
    {
        if (Xstate[0])
        {
            if (Xstate[1])
            {
                if (Xstate[2])
                    return 1;
            }
            if (Xstate[3])
            {
                if (Xstate[6])
                    return 1;
            }
            if (Xstate[4])
            {
                if (Xstate[8])
                    return 1;
            }
        }
        if (Xstate[1])
            if (Xstate[4])
                if (Xstate[7])
                    return 1;
        if (Xstate[2])
            if (Xstate[5])
                if (Xstate[8])
                    return 1;
        if (Xstate[3])
            if (Xstate[4])
                if (Xstate[5])
                    return 1;
        if (Xstate[6])
            if (Xstate[7])
                if (Xstate[8])
                    return 1;
        return 0;
    }
    else
    {
        if (Ostate[0])
        {
            if (Ostate[1])
            {
                if (Ostate[2])
                    return 1;
            }
            if (Ostate[3])
            {
                if (Ostate[6])
                    return 1;
            }
            if (Ostate[4])
            {
                if (Ostate[8])
                    return 1;
            }
        }
        if (Ostate[1])
            if (Ostate[4])
                if (Ostate[7])
                    return 1;
        if (Ostate[2])
            if (Ostate[5])
                if (Ostate[8])
                    return 1;
        if (Ostate[3])
            if (Ostate[4])
                if (Ostate[5])
                    return 1;
        if (Ostate[6])
            if (Ostate[7])
                if (Ostate[8])
                    return 1;
        return 0;
    }
}

int main()
{

    while (1)
    {
        PrintBoard();
        if (chance)
        {
            cout << "\nX's turn:";
            int input;
            cin >> input;
            if (CheckEmpty(input))
            {
                Xstate[input] = 1;
                if (CheckWin())
                {
                    cout << "Congratulations...!!! \t X is Winner...";
                    break;
                }
                chance = !chance;
            }
            else
            {
                cout << "This spot is filled\n";
                continue;
            }
        }
        else
        {
            cout << "\nO's turn:";
            int input;
            cin >> input;
            if (CheckEmpty(input))
            {
                Ostate[input] = 1;
                if (CheckWin())
                {
                    cout << "Congratulations...!!! \t O is Winner...";
                    break;
                }
                chance = !chance;
            }
            else
            {
                cout << "This spot is filled\n";
                continue;
            }
        }
    }

    return 0;
}