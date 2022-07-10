#include <iostream>

using namespace std;

int main()
{
    float n;
    float factor;
    cout << "Enter factor:";
    cin >> factor;
    while (1)
    {
        // long long int x = 0;
        cin >> n;
        // while (n >= 0.02)
        // {
        //     x = x + 0.02;
        //     n = n - 0.02;
        // }
        cout << endl
             << "       " << ((n / factor)) << endl;
    }

    return 0;
}