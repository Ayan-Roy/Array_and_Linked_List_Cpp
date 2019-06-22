#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter Column Size:  ";
    cin>>x;
    cout<<"Enter Row Size:  ";
    cin>>y;
    int Array[x][y];
    int i, j;
    cout<<"Enter Array elements: ";
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
            cin>>Array[i][j];
    }
    cout<<"Selected Array is:  "<<endl;
    for(i=0; i<x; i++)
    {
    for(j=0; j<y; j++)
            cout<<Array[i][j]<<"  ";
        cout<<endl;
    }
    return 0;

}
