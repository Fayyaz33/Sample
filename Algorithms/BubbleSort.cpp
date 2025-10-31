#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++) // for the array
    {
      for(int j=0;j<n-i-1;j++) //j represents array index
      {
          if (arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
      }
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={1,2,4,5,3};
    int n = 5;

    BubbleSort(arr, n);
    printArray(arr, n);
}
