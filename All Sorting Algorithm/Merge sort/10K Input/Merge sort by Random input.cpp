#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

int main()
{
    ifstream fileinput;
    fileinput.open("Input data 10K.txt");
    int n = 10000;
    int *Array = new int [n];
    for(int i=0; i<n; i++)
    {
        fileinput>>Array[i];
    }

    clock_t Start = clock();

	mergeSort(Array, 0, n - 1);

	clock_t End = clock();

	double Total_Time = double(End-Start)/CLOCKS_PER_SEC;
	fileinput.close();


	ofstream filewrite;
	filewrite.open("Merge Output 10K.txt");
	for(int i=0; i<n; i++)
    {
        filewrite<<Array[i]<<endl;
    }

    cout<<"Data stored successfully in the file."<<endl;
    cout<<"Total time for Sort function is :"<<Total_Time<<endl;
    filewrite<<"Total time for Sort function is :"<<Total_Time<<endl;

}


void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];


	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l+(r-l)/2;

		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}
}

