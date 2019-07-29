#include<iostream>
using namespace std;

int numcount (int x, int n)
{
    if (x>0)
    {
        x/=10;
        numcount(x, ++n);
    }
    else
        return n;
}


int main()
{
    long x;
    cout<<"Enter a long integer: ";
    cin>>x;

    int n = numcount(x, 0);
    cout<<"Total integers are : "<<n<<endl;
}
