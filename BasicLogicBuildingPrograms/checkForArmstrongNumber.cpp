#include<iostream>
#include<cmath>
using namespace std;

int countNoOfDigits(int num)
{
    if(num == 0) return 1; 
    int cnt=0;
    while(num>0)
    {
        cnt++;
        num = num / 10;
    }
    return cnt;
}   

bool checkForArmstrongNumber(int num)
{
    if(num == 0) return true;
    if(num<0)
    {
        return false;
    }
    int temp=num;
    int total = 0;
    int cnt = countNoOfDigits(num);
    while(temp>0)
    {
        int x = temp % 10 ;
        total = total + pow(x,cnt);
        temp = temp / 10;
    }
    return total == num ;
}
int main()
{
    int num;
    cin>>num;
    if(checkForArmstrongNumber(num))
    {
        cout<<"Yes , it is an armstrong number ";
    }
    else
    {
        cout<<"No , it is not an armstrong number ";
    }
   return 0;
}