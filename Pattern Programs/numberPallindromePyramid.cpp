#include<iostream>
using namespace std;

/*
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4
*/

void numberPallindromePyramid(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        int x=i;
        for(int j=rows;j>i;j--)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<x<<" ";
            x++;
        }
        x-=2;
        for(int l=1;l<i;l++)
        {
            cout<<x<<" ";
            x--;
        }
        cout<<"\n";
    }
}

int main()
{
    numberPallindromePyramid(4);
    return 0;
}