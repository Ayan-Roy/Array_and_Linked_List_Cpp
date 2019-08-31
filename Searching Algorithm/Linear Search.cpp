#include<iostream>
using namespace std;
int linear(int Array[], int n, int t)
{
    for(int i=0; i<n; i++)
    {
        if(Array[i]==t)
        {
            return ++i;
        }
    }
    return -1;
}

int main()
{
    int n=10;
    int Array[n] = {1,2,6,8,9,12,45,92, 100, 103};
    int pos = linear(Array, n, 92);
    if(pos == -1)
        cout<<"Item not found"<<endl;
    else
        cout<<"Item found in position : "<<pos<<endl;


}

