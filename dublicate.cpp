// 287. Find the Duplicate Number
// Medium
// Topics
// Companies
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2


#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,1,3,4,2,2};
   int n = sizeof(arr) / sizeof(arr[0]);;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])

        {
            cout<<arr[i];
            
        }
    }
}