#include<iostream>
using namespace std;
 
/*

1 2 3 4
1 2 3
1 2
1

*/
void invertedNumberHalfPyramid(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    invertedNumberHalfPyramid(4);
   return 0;
}