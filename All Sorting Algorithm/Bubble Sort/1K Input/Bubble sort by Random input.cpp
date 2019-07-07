#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
void sortArray(int Array[], int n);
int main()
{
    ifstream file;
    file.open("Input data 1K.txt");
    int n = 1000;
    int *Array = new int[n];
    for(int i=0 ; i<n; i++)
    {
        file>>Array[i];
    }

    clock_t start = clock();

    sortArray(Array, n);

    clock_t End = clock();

    double totat_time = double(End- start)/CLOCKS_PER_SEC;

    file.close();


    ofstream fileout;
    fileout.open("Bubble Output 1K.txt");

    for(int i=0 ; i<n; i++)
    {
        fileout<<Array[i]<<endl;
    }
    cout<<"Data stored successfully in the file."<<endl;
    cout<<"Total time for Sort function is :"<<totat_time<<endl;
    fileout<<"Total time for Sort function is :"<<totat_time<<endl;
    fileout.close();

    delete []Array;

}



void sortArray(int Array[], int n)
{
    int temp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(Array[j]>Array[j+1])
            {
                temp = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temp;

            }
        }

    }
}

