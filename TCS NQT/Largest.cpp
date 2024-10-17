// Problem Statement: Given an array, we have to find the largest element in the array.

// Examples
// Example 1:
// Input:
//  arr[] = {2,5,1,3,0};
// Output:
//  5
// Explanation:
//  5 is the largest element in the array. 
#include<bits/stdc++.h>
using namespace std;
int main()
{int arr[]={8,10,5,7,9};
    int maxi=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>maxi)
        {maxi=arr[i];}
    }
    cout<<maxi;
}