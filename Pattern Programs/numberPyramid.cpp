#include<iostream>
using namespace std;
 
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

void numberPyramid(int rows)
{
    int cols = (rows * 2) - 1;
    int center = rows;
    int start = center;
    int end = center;
    for(int i=1;i<=rows;i++)
    {
        int x = 1;
        bool check=true;
        for(int j=1;j<=cols;j++)
        {
            if(j>=start && j<=end)
            {
                cout<<x<<" ";
                if(x<i && check==true)
                {
                    x++;
                }
                else
                {
                    x--;
                    check=false;
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
        start--;
        end++;
    }
}

void numberPyramid2(int rows) // More cleaner code with same time complexity 
{
    for(int i = 1; i <= rows; i++)
    {
        // 1. Print spaces
        for(int s = 1; s <= rows - i; s++)
        {
            cout << " ";
        }

        // 2. Increasing numbers
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // 3. Decreasing numbers
        for(int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << "\n";
    }
}

int main()
{
   numberPyramid2(4);
   return 0;
}