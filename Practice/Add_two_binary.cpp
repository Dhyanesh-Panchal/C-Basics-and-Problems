#include <iostream>
#include <math.h>

using namespace std;
int BtoD(int a)
{
    int indx = 0, sum = 0;
    for (int i = 0; i < 15; i++)
    {
        sum += (a % 10) * pow(2, indx);
        indx++;
        a /= 10;
    }
    if (a == 0)
    {
        return sum;
    }
    else
    {
        return (-(sum - pow(2, 16)));
    }
}
int main()
{
    long long int a, b;
    cin >> a >> b;

    cout << BtoD(a) << " " << BtoD(b) << endl;

    return 0;
}