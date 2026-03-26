#include<iostream>
using namespace std;
 
/*

1
1 2
1 2 3
1 2 3 4

*/
void numberHalfPyramid(int rows)
{
    for(int i=1 ; i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    numberHalfPyramid(4);
   return 0;
}