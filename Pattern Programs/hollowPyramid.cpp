#include<iostream>
using namespace std;

/*

   *
  * *
 *   *
*******

*/

void hollowPyramid(int rows)
{
    int cols = (rows * 2) - 1;
    int center = rows;
    int start = center;
    int end = center;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(j==start || j==end || i==rows )
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
    hollowPyramid(4);
    return 0;
}