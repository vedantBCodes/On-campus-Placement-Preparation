#include<iostream>
using namespace std;
 
/*

A
A B
A B C
A B C D

*/
void alphabetHalfPyramid(int rows)
{
    char ch;
    for(int i=1 ; i<=rows;i++)
    {
        ch='A';
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
int main()
{
    alphabetHalfPyramid(4);
   return 0;
}