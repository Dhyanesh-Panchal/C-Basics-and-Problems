#include <iostream>
using namespace std;
bool prime(int i)
{
    if (i == 1 || i == 0)
        return false;
    int temp = 2;
    while (1)
    {
        if (i % temp == -0)
        {
            if (i == temp)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            temp++;
        }
    }
}
int main()
{
    int l, h;
    cin >> l, h;
    for (int i = l; i <= h; i++)
    {
        if (prime(i) == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}