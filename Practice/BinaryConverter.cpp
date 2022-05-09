#include <iostream>
#include <string.h>

using namespace std;
void PrintBinary(int n)
{
    if (n > 0)
    {
        PrintBinary(n / 2);
        cout << n % 2;
    }
}
int main()
{
    char *s;
    s = new char[100];
    gets(s);
    cout << endl;
    for (int i = 0; i < strlen(s); i++)
    {
        PrintBinary((int)s[i]);
        cout << " ";
    }

    return 0;
}