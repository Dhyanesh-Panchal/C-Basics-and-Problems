#include <iostream>

using namespace std; // TEmplates are used to define multiple clases of same porpose
                     // for different datatype

template <class T1, class T2>
// we can create multiparameterised templates

class vectors
{
public:
    T1 *arr;
    T2 c;
    int size = 0;

    // Constructors
    vectors(int a)
    {
        size = a;
        arr = new T[size];
    }
    vectors(T2 ch)
    {
        c = ch;
    }
    vectors(void)
    {
    }

    void getdata()
    {
        cin >> size;
        arr = new T1[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    T1 dotproduct(vectors x)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * x.arr[i];
        }
        return d;
    }
};

// NEED to declare multiple templates for different classes
template <class T1>
class next
{
    T1 a;
};

// This template is for newxt function
template <class T1, class T2>
T1 function(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    vectors<float, char> a('A'), b('G');
    a.getdata();
    b.getdata();

    cout << "The dot product of vector a an d b is-" << a.dotproduct(b);

    return 0;
}