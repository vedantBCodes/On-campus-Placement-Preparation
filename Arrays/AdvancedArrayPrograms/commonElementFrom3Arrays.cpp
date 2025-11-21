#include<iostream>
using namespace std;
 
void commonElementFromArrays(int arr1[],int arr2[],int arr3[],int size1,int size2,int size3)
{
    cout<<"Common Element : ";
    for(int i=0;i<size1;i++)
    {
        bool check=false;
        for(int x=i-1;x>=0;x++)
        {
            if(arr1[x]==arr1[i])
            {
                check=true;
                break;
            }
        }
        if(check==false)
        {
            for(int j=0;j<size2;j++)
           {
            if(arr1[i]==arr2[j])
            {
                for(int k=0;k<size3;k++)
                {
                    if(arr3[k]==arr1[i])
                    {
                        cout<<arr1[i]<<" ";
                        break;
                    }
                }
                break;
            }
           }
        }
    }
}

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {6, 7, 20, 80, 100};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[] = {3, 4, 15, 20, 30, 70, 80};
     int size3=sizeof(arr3)/sizeof(arr3[0]);
    commonElementFromArrays(arr1,arr2,arr3,size1,size2,size3);
   return 0;
}