#include<iostream>
using namespace std;
 
/*

*******
 *****
  ***
   *

*/ 

void invertedFullPyramid(int rows) 
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

int main()
{
   invertedFullPyramid(7);
   return 0;
}