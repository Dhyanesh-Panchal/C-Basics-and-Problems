#include <iostream>

using namespace std;

int nCr(int n, int r)
{
    int ans = 1;
    for (int i = 1; i <= r; i++)
    {
        ans *= (float)(n - i + 1) / i;
    }
    return (int)ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j);
            if (nCr(i, j) > 9)
            {
                cout << "  ";
            }
            else
                cout << "   ";
        }
        cout << endl;
    }

    return 0;
}