#include<iostream>
using namespace std;

int largest(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int secondLargest(int arr[], int size) //with O(n2) time complexity
{
    if(size < 2)
        return -1;  // no second largest

    int max = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    int secondMax = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > secondMax && arr[i] < max)
            secondMax = arr[i];
    }

    if(secondMax == INT_MIN)
        return -1;  // all elements same

    return secondMax;
}

int secondLargest2(int arr[], int size)  //with O(n) time complexity
{
    if(size < 2)
        return -1;

    int max = INT_MIN, secondMax = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    if(secondMax == INT_MIN)
        return -1;

    return secondMax;
}

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[], int size)
{
    for(int i=0;i<size/2;i++)
    {
        swap(arr[i],arr[size-i-1]);
    }
}

void rotateArray(int arr[], int size, int rotations) // Left rotation
{
    if(size == 0) return;
    int cnt=0;
    rotations = rotations % size; // if the no. of rotations are greater than size 
    while(cnt!=rotations)
    {
        int temp=arr[0];
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[size-1]=temp;
        cnt++;
    }
}

int sumOfDigits(int num)
{
    num = abs(num);
    int sum=0;
    while(num>0)
    {
        int x = num % 10 ;
        sum = sum + x;
        num = num /10 ;
    }
    return sum;
}

bool checkForPerfectNumber(int num)
{
    if(num <=1)
    {
        return false;
    }
    int total = 0 ;
    for(int i=1 ; i<=num/2 ; i++)
    {
        if(num % i == 0)
        {
            total += i; 
        }
    }
    return total == num ;
}

int GCDCalculation(int num1 , int num2)
{
    if(num1 == 0) return num2;
    if(num2 == 0) return num1;
    num1 = abs(num1);
    num2 = abs(num2);
    int small = min(num1, num2);
    for(int i=small ; i>=1;i--)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            return i;
        }
    }
    return 1;
}

int LCMCalculation(int num1, int num2)
{
    num1 = abs(num1);
    num2 = abs(num2);

    if(num1 == 0 || num2 == 0)
        return 0;

    int max1 = max(num1, num2);
    
    for(int i = max1; i <= num1 * num2; i += max1)
    {
        if(i % num1 == 0 && i % num2 == 0)
            return i;
    }
    return num1 * num2;
}

int main()
{
    int arr[]={-4,3,2,-5,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Second Largest no. "<<secondLargest(arr,size);
    // reverseArray(arr,size);
    // rotateArray(arr,size,3);
    // printArray(arr,size);
    // cout<<sumOfDigits(1234);
    // if(checkForPerfectNumber(6))
    // {
    //     cout<<"Yes it is a perfect number";
    // }
    // else
    // {
    //     cout<<"No it is not a perfect number";
    // }
    // cout<<GCDCalculation(8,12);
    cout<<LCMCalculation(6,8);
    return 0;
}