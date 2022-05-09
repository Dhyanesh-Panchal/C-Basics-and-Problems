#include <iostream>
using namespace std;
void col(int n)
{
    if (n > 0)
    {
        col(n / 26);
        printf("%c", min(n % 26, n) + 64);
        n /= 26;
    }
    else 
        return;
}
int main()
{
    int n;
    cin >> n;
    col(n);

    return 0;
}