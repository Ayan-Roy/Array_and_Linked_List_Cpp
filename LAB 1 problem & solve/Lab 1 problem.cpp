#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int row, column, i, j;
    ifstream file;
    file.open("Input.txt");
    file>>row;
    file>>column;
    int **Array = new int *[row];

    for(i=0; i<row; i++)
       {
            Array[i] = new int[column];
       }

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
             file>>Array[i][j];
        }
    }
    file.close();

    ofstream file2;
    file2.open("Output.txt");

    int Array2[column][row];

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
             Array2[j][i] = Array[i][j];
        }
    }

    for(i=0; i<column; i++)
    {
        for(j=0; j<row; j++)
        {
             file2<<Array2[i][j]<<"  ";
        }
        file2<<endl;
    }

    cout<<"\nTransverse Array is successfully stored. "<<endl;

    file2.close();
}



