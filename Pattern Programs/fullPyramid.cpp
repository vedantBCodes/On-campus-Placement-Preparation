#include<iostream>
using namespace std;
 
/*
   *
  ***
 *****
*******
*/

void fullPyramid_1(int rows) 
{
    int cols = ( rows * 2 ) - 1 ;
    int center = cols / 2 + 1;
    int start = center;
    int end = center;
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
        start--;
        end++;
        cout<<"\n";
    }
}

void fullPyramid_2(int rows) 
{
    for(int i=rows;i>=1;i--)
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
        for(int k=4;k>i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
   fullPyramid_2(4);
   return 0;
}