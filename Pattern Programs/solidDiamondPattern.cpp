#include<iostream>
using namespace std;
 
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/ 

void solidDiamondPattern(int rows) 
{
    if(rows%2==0)
    {
        rows++;
    }
    int cols = rows ;
    int center = (rows / 2) + 1 ;
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
        if(i<=rows/2)
        {
            start--;
            end++;
        }
        else
        {
            start++;
            end--;
        }
        
        cout<<"\n";
    }
}

int main()
{
   solidDiamondPattern(4);
   return 0;
}