#include<iostream>
using namespace std;

/*

*       *
  *   *
    *
  *   *
*       * 

*/

void XPattern(int rows)
{
    int start=1;
    int end=rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(j==start || j==end)
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

void XPattern2(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(j == i || j == rows - i + 1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    XPattern2(6);
    return 0;
}