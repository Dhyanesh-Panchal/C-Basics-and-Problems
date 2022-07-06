#include <bits/stdc++.h>

using namespace std;
float val;
float ft, in, inFracVal, inFN, inFD, maxDeno, factor;

float mod(float x)
{
    if (x < 0)
        return -x;
    return x;
}

// prints fraction of inches
void neutralis()
{
    int temp = inFN;
    inFN = inFN / __gcd((int)inFN, (int)inFD);
    inFD = inFD / __gcd(temp, (int)inFD);
}

// print the values
void PrintFrac()
{
    ft = floor(val);
    in = factor * (val - floor(val));
    inFracVal = in - floor(in);

    inFD = maxDeno;

    // Find max Fit Value
    float diff = inFracVal;
    for (int i = 1; i < maxDeno; i++)
    {

        float curntDiff = mod(inFracVal - (i / maxDeno));
        if (curntDiff < diff)
        {
            inFN = i;
            diff = curntDiff;
        }
    }
    neutralis();

    cout << (int)ft << "-" << (int)in << "-" << inFN << "/" << inFD;
}

int main()
{
    cout << "enter the fractor";
    cin >> factor;
    cout << "Enter the value in feet:";
    cin >> val;
    cout << "Enter max precision in deno:";
    cin >> maxDeno;
    PrintFrac();

    return 0;
}