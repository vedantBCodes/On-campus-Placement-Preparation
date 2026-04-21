#include<iostream>
using namespace std;
 
/*

*******
 *****
  ***
   *

*/ 

void invertedFullPyramid_01(int rows) 
{
    int cols = ( rows * 2 ) - 1 ;
    int start = 1;
    int end = cols;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(j>=start && j<=end)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        start++;
        end--;
        cout<<"\n";
    }
}

void invertedFullPyramid_02(int rows) 
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(j>=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int k=rows;k>i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
   invertedFullPyramid_02(4);
   return 0;
}