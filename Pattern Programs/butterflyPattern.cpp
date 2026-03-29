#include<iostream>
using namespace std;

/*

*              *
* *          * *
* * *      * * *
* * * *  * * * *
* * * *  * * * *
* * *      * * *
* *          * *
*              *

*/

void butterflyPattern(int rows)
{
    // Upper half
    for(int i = 1; i <= rows; i++)
    {
        // Left stars
        for(int j = 1; j <= i; j++)
            cout << "* ";

        // Spaces
        for(int j = 1; j <= 2 * (rows - i); j++)
            cout << "  ";

        // Right stars
        for(int j = 1; j <= i; j++)
            cout << "* ";

        cout << "\n";
    }

    // Lower half
    for(int i = rows; i >= 1; i--)
    {
        // Left stars
        for(int j = 1; j <= i; j++)
            cout << "* ";

        // Spaces
        for(int j = 1; j <= 2 * (rows - i); j++)
            cout << "  ";

        // Right stars
        for(int j = 1; j <= i; j++)
            cout << "* ";

        cout << "\n";
    }
}

int main()
{
    butterflyPattern(8);
    return 0;
}