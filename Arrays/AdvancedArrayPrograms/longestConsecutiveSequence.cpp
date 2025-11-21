#include<iostream>
using namespace std;
 
int longestConsecutiveSequence(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    int Len=1;
    int maxLen=1;

    for(int i=1;i<size;i++)
    {
        if(arr[i] == arr[i - 1])
        {
            continue; // skip duplicates
        }
        else if(arr[i]==arr[i-1]+1)
        {
            Len++;
        }
        else
        {
            maxLen = max(maxLen, Len);
            Len=1;
        }
    }
    return maxLen;
}

int main()
{
    int arr[]={100, 4, 200, 1, 3, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The length of longest Consecutive Sequence : "<<longestConsecutiveSequence(arr,size);
   return 0;
}