#include <iostream>

using namespace std;
bool checktriplet(int a, int b, int c)
{
    if (a * a == (b * b + c * c) || b * b == (a * a + c * c) || c * c == (a * a + b * b))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    checktriplet(a, b, c) ? (cout << "Yes") : (cout << "No");

    return 0;
}