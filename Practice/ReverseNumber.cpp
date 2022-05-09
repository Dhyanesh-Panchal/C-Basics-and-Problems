#include<iostream> 
 
using namespace std;
int reverse(int n)
{   int temp;
    temp=n;
    n=0;

    while (temp>0)
    {
        n= 10*n + temp%10;
        temp/=10;
    }
    return n;
}
int main()
{
    int n;
    cin>>n;
    
    
    cout<<"The reverse number is:"<<reverse(n);


    return 0;
}       