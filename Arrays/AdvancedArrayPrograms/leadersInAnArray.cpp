/*

A leader is an element that is greater than every element that comes after it in the array.

*/

#include<iostream>
using namespace std;

void leadersInAnArray(int arr[],int size) //Brute-force approach
{
    cout<<"Leaders in the given array are : ";
    for(int i=0;i<size;i++)
    {
        bool isSmaller=false;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                isSmaller=true;
                break;
            }
        }
        if(isSmaller!=true)
        {
            cout<<arr[i]<<" ";
        }
    }
}

void leadersInAnArray2(int arr[],int size) //
{
    int max=INT_MIN;
    cout<<"Leaders in the given array are : ";
    for(int i=size-1;i>=0;i--)
    {
        if(arr[i]>max)
        {
            cout<<arr[i]<<" ";
            max=arr[i];
        }
    }
}

int main()
{
    int arr[]={16, 17, 4, 3, 5, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    leadersInAnArray2(arr,size);
}