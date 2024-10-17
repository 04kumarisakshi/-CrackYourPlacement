// Problem Statement: Given an array, we have to find the smallest element in the array.

// Examples:

// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 0
// Explanation: 0 is the smallest element in the array. 

// Example2: 
// Input: arr[] = {8,10,5,7,9};
// Output: 5
// Explanation: 5 is the smallest element in the array.
#include<bits/stdc++.h>
using namespace std;
int main()
{int arr[]={8,10,5,7,9};
    int mini=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<mini)
        {mini=arr[i];}
    }
    cout<<mini;
}