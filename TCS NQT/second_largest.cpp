// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.
#include<bits/stdc++.h>
using namespace std;

// optimal approach;
int secondLargest(int arr[],int n)
{
int largest=INT_MIN;
int second_largest=INT_MIN;
if(n<2)
{
    return -1;
}
for(int i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
        second_largest=largest;
        largest=arr[i];

    }
}
return second_largest;
}
int main()
{  
    int arr[]={8,10,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargest(arr,n);
    
    return 0;
    // sort(arr,arr+5);
    // cout<<" Second Largest:"<<arr[3]<<" second smallest: "<<arr[1];
}