/*

You are given an array of numbers.
You must rearrange it in such a way that the elements appear in this order:

maximum element → minimum element → 2nd maximum → 2nd minimum → 3rd maximum → 3rd minimum → …

So the array should look like a zig-zag pattern between the largest and the smallest values.

✅ Example

Suppose the array is:

[1, 2, 3, 4, 5, 6]

The rearranged array should be:

[6, 1, 5, 2, 4, 3]

*/

#include<iostream>
using namespace std;
 
void rearrangeAnArray(int arr[], int size)
{
    // Step 1 : Sort array
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);

    int x = 0;
    int last = size - 1;   // <-- Track the largest element index

    // Step 2 : Insert max elements at 0,2,4,... and shift others
    for(int i=0; i<size/2; i++)
    {
        int temp = arr[last--];   // <-- take correct largest element each time

        // Shift elements right
        for(int j = last+1; j > x; j--)
        {
            arr[j] = arr[j-1];
        }

        arr[x] = temp;  // place max element
        x += 2;         // jump to next even index
    }

    // Print result
    cout << "Array after rearrangement: ";
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[]={3,4,2,6,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    rearrangeAnArray(arr,size);
    return 0;
}
