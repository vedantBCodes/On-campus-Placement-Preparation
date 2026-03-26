#include<iostream>
using namespace std;
 
/*

   *
  ***
 *****
*******

*/

void fullPyramid(int rows) 
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

int main()
{
   fullPyramid(4);
   return 0;
}