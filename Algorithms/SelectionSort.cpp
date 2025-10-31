#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int smallestIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[smallestIndex])
                smallestIndex = j;
        }
         swap(arr[i], arr[smallestIndex]);
    }
}

void printArray(int arr[], int n)
{
     for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
}
int main()
{
    int n = 5;
    int arr[]={3,5,1,2,4};
    SelectionSort(arr, n);
     printArray(arr, n);
}
