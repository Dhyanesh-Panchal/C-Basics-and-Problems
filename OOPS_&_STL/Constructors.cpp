#include <iostream>

using namespace std;

class complex
{
private:
    float rel, img;

public:
    // This is a constructor
    complex(int a, int b) // initilization constructor
    {
        img = b;
        rel = a;
    }

    complex(void) // default constructor
    {
    }

    void print()
    {
        cout << rel << " + (" << img << ")i";
    }
};
int main()
{
    complex a(5, 6), b(2, -5.4), c;

    cout << "\nComplex a is:";
    a.print();
    cout << "\nComplex b is:";
    b.print();
    cout << "\nComplex c is:";
    c.print();

    return 0;
}