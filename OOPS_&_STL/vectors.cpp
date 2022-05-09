#include <iostream>
#include <vector>

/*
-> Vector is a data container which can store elements and it can increase or decrease its size.
-> As soon as we append element after the vector is full it DOUBLES its SIZE.
*/

using namespace std;

int main()
{
    vector<int> v;                                         // Declaration
    cout << "capacity of vector=" << v.capacity() << endl; // ".capacity" is a function to get the current capacity of vector.
    cout << "size of vector=" << v.size() << endl;         // ".size" is a function to get the current size of vector.

    /****** Append element*********/
    v.push_back(10); // now size is 1 capacity is 1
    v.push_back(20); // now size is 2 capacity is 2
    v.push_back(23); // now size is 3 capacity is 4   (capacity doubles as vector saturates)

    /******* Get Front and back elements of vector********/
    cout << "The front element is:" << v.front() << endl;
    cout << "The back element is:" << v.back() << endl;

    /******* Clear elements in vctor***********/

    cout << "Before clear=>  size=" << v.size() << " capacity=" << v.capacity() << endl;
    v.clear(); // This clears all the elements in vector BUT capacity remains same.
    cout << "After clear=>  size=" << v.size() << " capacity=" << v.capacity() << endl;

    /********* Initialization with declaration *********/

    vector<int> x(5, 2); // vector<datatype>name( SIZE , initialize all elements)
                         // here all elements of vector is initialized with 2.
                         // If not mentioned then it initialize with 0.

    for (int i = 0; i < x.size(); i++)
    {
        cout << x.at(i); // ".at" is use to get elements at that index.
    }                    // we can also write x[i]. same as array to access the elements.

    return 0;
}