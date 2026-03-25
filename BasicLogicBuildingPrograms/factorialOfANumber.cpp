#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    cin >> num;

    if(num < 0)
    {
        cout << "Factorial does not exist for negative numbers";
    }
    else
    {
        cout << "Factorial of " << num << " is: " << factorial(num);
    }
}