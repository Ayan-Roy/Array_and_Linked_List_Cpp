#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the Array:  " ;
    cin>>n;
    int *Array = new int[n];
    cout<<"Enter Array Elements: ";
    for(int i=0 ; i<n; i++)
    {
        cin>>Array[i];
    }
    cout<<"Displaying Array Elements:";
    for(int i=0 ; i<n; i++)
    {
        cout<<Array[i]<<" ";
    }
    
    delete []Array;
    
}
