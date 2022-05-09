#include <iostream>

using namespace std;

int main()
{
    int n, rows;
    cin >> n >> rows;
    cout << ((n - 1) % rows) * 60 << " " << ((n - 1) / rows) * 160;

    return 0;
}