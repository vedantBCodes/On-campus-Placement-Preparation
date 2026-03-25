#include<iostream>
using namespace std;
 
int reverseNumber(int num)
{
    int sign = (num<0) ? -1 : +1 ;
    num = abs(num) ;
    int rev=0;
    while(num>0)
    {
        int x = num%10;
        rev = x + (rev*10);
        num = num/10;
    }
    return rev * sign;
}
int main()
{
    int num;
    cin>>num;
    int result = reverseNumber(num);
    cout<<"Reversed  Number : "<<result;
   return 0;
}