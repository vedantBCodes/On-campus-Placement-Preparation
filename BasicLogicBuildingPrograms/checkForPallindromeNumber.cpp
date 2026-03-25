#include<iostream>
using namespace std;
 
int reverseNumber(int num)
{
    int rev=0;
    while(num>0)
    {
        int x = num%10;
        rev = x + (rev*10);
        num = num/10;
    }
    return rev;
}

bool checkForPallindrome(int num)
{
    if(num<0)
    {
        return false;
    }
    return reverseNumber(num) == num ;
}
int main()
{
    int num;
    cin>>num;
    if(checkForPallindrome(num))
    {
        cout<<"Pallindrome";
    }
    else
    {
        cout<<"Not a Pallindrome";
    }
   return 0;
}
