#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1,temp;

    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=pivot;
    arr[high]=temp;
    return i+1;
}

void QuickSort(int arr[],int low ,int high)
{
    if(low < high)
    {
        int pivot=partition(arr,low,high);
        QuickSort(arr,low,pivot-1);
        QuickSort(arr,pivot+1,high);
    }
}

int main()
{
    int arr[]={20,14,26,1,24,35,2};
    QuickSort(arr,0,6);
    for(int i=0;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }
}


