#include<iostream>
using namespace std;

void Activity_selection(int Start[], int End[])

{
    int i, j;
    i=0;
    cout<<Start[0]<<"  "<<End[0]<<endl;
    for(j=1; j<5; j++)
    {
        if(Start[j]>=End[i])
        {
            cout<<Start[j]<<"  "<<End[j]<<endl;
            i=j;
        }
    }
}


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
    cout<<"\n"<<endl;

    cout<<"Activity Selection is: "<<endl;

    Activity_selection(A, B);
}
