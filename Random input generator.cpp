#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    srand(456655);
    ofstream file;
    file.open("Input data 100K.txt");

    for(int i=0; i<1000000; i++)
    {
        file<<rand()<<endl;
    }

    cout<<"Data stored"<<endl;
    file.close();

}
