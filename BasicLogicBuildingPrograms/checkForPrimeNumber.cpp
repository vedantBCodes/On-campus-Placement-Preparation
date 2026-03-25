#include<iostream>
using namespace std;

bool primeCheck(int num)
{
    if(num<2) //Handling edge cases
    {
        return false;
    }
    for(int i=2;i*i<num;i++) // Iterate the loop only till the √num
    { 
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    if(primeCheck(num))
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
    return 0;
}