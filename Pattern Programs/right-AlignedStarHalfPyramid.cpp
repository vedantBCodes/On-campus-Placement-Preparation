#include<iostream>
using namespace std;
 
/*
      *
    * *
  * * *
* * * *

*/

void rightAlignedStarHalfPyramid(int rows) 
{
    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=rows;j++)
        {
            if(j<i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
   rightAlignedStarHalfPyramid(4);
   return 0;
}