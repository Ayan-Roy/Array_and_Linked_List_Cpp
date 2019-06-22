
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x, y, i;
    cout<<"Enter Column Size:  ";
    cin>>x;
    cout<<"Enter Row Size:  ";
    cin>>y;
    int **Array = new int*[x];
    cout<<"Enter Array elements: ";
    for(i=0; i<x; i++)
    {
        Array[i] = new int [y];
    }

    int j;

    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cin>>Array[i][j];
        }
    }
    cout<<"Entered Array is: "<<endl;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            cout<<Array[i][j]<<" ";
        }
        cout<<endl;
    }


    for(i=0; i<x; i++)
    {
        delete[] Array[i];
    }


    delete [] Array;
}

