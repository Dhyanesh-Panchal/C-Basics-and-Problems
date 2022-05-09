#include<iostream>
using namespace std;

int main(){
    
    int n,c;
    cout<<"Enter the number of cars in race";
    cin>>n;
    c=n;
    int a[n];

    for (int i = 0; i <n; i++)
    {
        cout<<endl<<"Enter the speed of car no."<< i+1 <<" from last";
        cin>>a[i];
    }
    
    for (int i = n; i >0 ; i--)
    {
        if (a[i]<a[i-1])
        {
            c--;
            a[i-1]=a[i];
            
        }
        
    }
    

cout<<c<<" Clusters are formed";
return 0;

}

