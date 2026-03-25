#include<iostream>
using namespace std;

void fibonacciSeries(int num)
{
    int a = 0, b = 1;

    // Handling all the edge cases 
    if(num == 0)
        return;

    if(num >= 1)
        cout << a << " ";

    if(num >= 2)
        cout << b << " ";

    for(int i = 3; i <= num; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main()
{
    int num;
    cin >> num;

    if(num < 0)
    {
        cout << "No negative number allowed";
    }
    else
    {
        fibonacciSeries(num);
    }

    return 0;
}