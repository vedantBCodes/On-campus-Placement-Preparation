#include<iostream>
using namespace std;

/*

* * * * *
      *
    *  
  * 
* * * * *

*/

void ZPattern(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(i == 1 || i == rows || j == rows - i + 1)
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
    ZPattern(5);
    return 0;
}