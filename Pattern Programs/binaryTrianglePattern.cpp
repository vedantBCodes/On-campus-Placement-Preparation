#include<iostream>
using namespace std;
 
/*

1
0 1
1 0 1
0 1 0 1 

*/
void binaryTrianglePattern(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j%2<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    binaryTrianglePattern(4);
   return 0;
}