/*
A majority element in an array is the element that appears more than n/2 times, where n is the size of the array.
This means the majority element must appear more than all other elements combined, so only one such element can exist.

Example :

Array: [2, 2, 1, 2, 3, 2, 2]
Size n = 7
n/2 = 3.5
*/
#include<iostream>
using namespace std;
 
int majorityElement(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int cnt=0;
        bool check=false;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                check=true;
                break;
            }
        }
        if(check==false)
        {
            for(int k=0;k<size;k++)
            {
                if(arr[i]==arr[k])
                {
                    cnt++;
                }
            }
            if(cnt>size/2)
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int majorityElement2(int arr[],int size)
{
    int majorityEle=arr[0];
    int cnt=1;
    for(int i=1;i<size;i++)
    {
        if(arr[i]==majorityEle)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if(cnt==0)
        {
            majorityEle=arr[i];
            cnt=1;
        }
    }
    return majorityEle;
}


int main()
{
    int arr[]={2, 2, 1, 2, 3, 2, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Majority element : "<<majorityElement2(arr,size);
   return 0;
}