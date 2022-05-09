#include <iostream>
using namespace std;

class student
{
    string name; // By default Private variable which can be accessed by class only

public: // Public variables which can be accessed from anywhere
    int age;
    bool gender;

    void getname()
    {
        cin >> name;
    }

    void printinfo()
    {
        cout << "name-" << name << endl
             << "age-" << age << endl
             << "gender-" << gender;
    }
    // Parametarised Constructor
    student(string s, int a, bool g)
    {
        name = s;
        age = a;
        gender = g;
    }

    // Default Constructor
    student()
    {
        cout << "Default Constructor"
             << "\n"; // Can be empty
    }

    // Copy Constructor
    student(student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Destructor
    ~student()
    {
        cout << "Destructor is called\n ";
    }

    // Operator Overloading
    bool operator==(student &a) // here == is a operator defined by us on this class
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    student arr[3];   // object can be array or single also.
    arr[0].getname(); // As name is private it is accessed by its function
    cin >> arr[0].age;
    cin >> arr[0].gender;

    arr[0].printinfo();

    student a("Dhyanesh", 17, 0);

    a.printinfo();

    student b(a); // Copy Constructor

    cout << "The data of b is" << endl;
    b.printinfo();

    student c("hello", 21, 1);
    if (b == a) // Use operator over loading
    {
        cout << " b and a are same";
    }

    if (c == a)
    {
        cout << "c and a are  same";
    }
    else
    {
        cout << "c and a are not same";
    }

    return 0;
}