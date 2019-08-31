#include<iostream>
using namespace std;

int Binary(int Array[], int n, int l, int r, int x)
{
    if(r>=l)
    {
        int mid = l+(r-l)/2;

        if(Array[mid] == x)
            return ++mid;
        if(Array[mid]>x)
            return Binary(Array, n, l, mid-1, x);
        else
            return Binary(Array, n, mid+1, r, x);
    }

    return -1;
}

int main()
{
    int n=10;
    int Array[n] = {1,2,6,8,9,12,45,92, 100, 103};
    int pos = Binary(Array, n, 0, n-1, 92);
    if(pos == -1)
        cout<<"Item not found"<<endl;
    else
        cout<<"Item found in position : "<<pos<<endl;


}

