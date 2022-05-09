#include<iostream>

using namespace std;

// This is our class
class Employee{

    private:
    int a,b,c;          //These variables can be changed using function of this class only. 
    
    public:
    int d;
    string e;  // It is a data type in c++
    void setdata(int a1,int b1,int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }

    void printdata(); // we will define it out side .
};


void Employee :: printdata()
{
    cout<<"\nThe value of a is "<<a;
    cout<<"\nThe value of b is "<<b;
    cout<<"\nThe value of c is "<<c;
    cout<<"\nThe value of d is "<<d;
    cout<<"\nThe value of e is "<<e;
}


int main()
{
    Employee Dhyanesh;  //in this way we define the objects of that class.

    // Dhyanesh.a=10;   it is no valid as 'a' is a private variable. 

    Dhyanesh.d=23;
    Dhyanesh.e="Hello my name is Dhyaensh";
    Dhyanesh.setdata(3,43,564);  // in this way we use function of that class to assigne private variables.

    Dhyanesh.printdata();

    return 0;
}
