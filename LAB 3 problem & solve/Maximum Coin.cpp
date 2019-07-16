#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int A[n]={5,10,20,25};
    int B[n]={2,3,3,2};
    int temp, k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

            }
        }

    }
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<"  ";
    }
    cout<<endl;

    int value =50;
    int x=0;
    for(int i=0; i<n; i++)
    {
        x+=B[i];
    }

    int totalcoin =0;
    cout<<"Selected coins Are: "<<endl;
    for(int i=0; i<n; i++)
    {
        k=i;
        for(int j=0; j<B[k]; j++)
        {
            if(value>=A[k])
            {
               totalcoin++;
               value-=A[k];
               cout<<A[k]<<" ";
            }
        }

    }
    cout<<endl;
    cout<<"Maximum coins are: ";

    cout<<totalcoin<<endl;

}
