/*
The first repeating element in an array is the element that appears more than once, and among all such repeating elements, it is the one whose first occurrence happens earliest in the array.

Example

Array: [3, 5, 1, 2, 5, 3]

Repeating elements:

5 appears again later
3 appears again later

But the first repeating element is 5 because it is the one whose first appearance comes before all other repeating elements.

So, first repeating element = 5.
*/
#include<iostream>
using namespace std;

int findRepeating(int arr[], int size)
{
    int index = size;  // store earliest second occurrence index
    int element = -1;  // store the repeating element

    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                if(j < index)   // choose the smallest second-occurrence index
                {
                    index = j;
                    element = arr[i];
                }
                break; // break inner loop after finding first duplicate for arr[i]
            }
        }
    }
    return element;
}




int main()
{
    int arr[]={3, 5, 1, 2, 5, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"First Repeating element : "<<findRepeating(arr,size);
   return 0;
}