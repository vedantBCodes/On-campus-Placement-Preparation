/*

🔹 Concept Explanation (XOR Method)
In an array where every element appears twice except one element, you can find the unique element using the XOR operator.

✔ Key XOR properties

a ^ a = 0
(Any number XOR with itself becomes zero)

a ^ 0 = a
(Any number XOR with zero remains unchanged)

XOR is commutative and associative
So order does not matter:
a ^ b ^ a = b

✔ How this solves the problem

If every number appears twice except one:

All pairs cancel out to 0 using XOR.

Only the unique element remains.

Example:
Array → [4, 1, 2, 1, 2]
XOR process → 4 ^ 1 ^ 2 ^ 1 ^ 2 = 4
So the element that appears once = 4

*/
#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int xorResult = 0;

    for(int i = 0; i < size; i++)
    {
        xorResult ^= arr[i];  // XOR all elements
    }

    return xorResult; // final answer
}


int main()
{
    int arr[]={4, 1, 2, 1, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unique element : "<<findUnique(arr,size);
   return 0;
}