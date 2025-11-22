/*
An inversion in an array is a situation where:

A larger number appears before a smaller number
(even though normally we expect smaller numbers to come first in a sorted order).

So, an inversion pair is simply a pair of elements (i, j) such that:

i < j, but

array[i] > array[j]
*/

#include<iostream>
using namespace std;
 
int countInversion(int arr[],int size)
{
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int arr[]={4,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Inversion count : "<<countInversion(arr,size);
   return 0;
}