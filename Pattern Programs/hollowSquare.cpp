#include<iostream>
using namespace std;

/*

* * * *
*     *
*     *
* * * *

*/

void hollowSquare(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    hollowSquare(4);
    return 0;
}