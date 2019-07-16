#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int A[n]= {8,5,1,3,0};
    int B[n]= {9,7,2,4,6};

    cout<<"Before Pair sorting"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<"  ";
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<B[i]<<"  ";
    }
    cout<<"\n"<<endl;

    int temp, j;
    for(int i=0; i<n; i++)
    {
        j=i;
        while(j>0 && B[j-1]>B[j])
        {
            temp = B[j-1];
            B[j-1] = B[j];
            B[j] = temp;

            temp = A[j-1];
            A[j-1] = A[j];
            A[j] = temp;

            j--;
        }
    }

    cout<<"After Pair sorting"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<"  ";
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<B[i]<<"  ";
    }
    cout<<endl;
}
