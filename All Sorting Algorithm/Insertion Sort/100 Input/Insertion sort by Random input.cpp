#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;
void Insertion_Sort(int Array[], int n);

int main()
{
    ifstream fileread;
    fileread.open("Input data 100.txt");
    int n = 100;
    int *Array = new int[n];
    for(int i=0; i<n; i++ )
    {
        fileread>>Array[i];
    }

    clock_t Start = clock();

    Insertion_Sort(Array, n);

    clock_t End = clock();

    fileread.close();

    double Total_Time = double (End-Start)/CLOCKS_PER_SEC;

    ofstream filewrite;
    filewrite.open("Insertion Output 100.txt");
    for(int i=0; i<n; i++)
    {
        filewrite<<Array[i]<<endl;
    }
    cout<<"Data stored successfully in the file."<<endl;
    cout<<"Total time for Sort function is :"<<Total_Time<<endl;
    filewrite<<"Total time for Sort function is :"<<Total_Time<<endl;

    filewrite.close();


}

void Insertion_Sort(int Array[], int n)
{
    int curr, pre;
    for(int i=1; i<n; i++)
    {
        curr = Array[i];
        pre = i-1;
        while(pre>=0 && Array[pre]>curr)
        {
            Array[pre+1] = Array[pre];
            pre--;
        }
        Array[pre+1] = curr;
    }
}
