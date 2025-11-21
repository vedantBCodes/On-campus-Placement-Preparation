#include<iostream>
using namespace std;
 
int smallestPositive(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    for(int i=1;i<=max;i++)
    {
        bool check=false;
        for(int j=0;j<size;j++)
        {
            if(arr[j]==i)
            {
                check=true;
                break;
            }
        }
        if(check==false)
        {
            return i;
        }
    }
    return max+1;
}

int main()
{
    int arr[]={3, 4, -1, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Smallest positive number : "<<smallestPositive(arr,size);
   return 0;
}