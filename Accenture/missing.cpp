#include<bits/stdc++.h>
using namespace std;

int main(){
     int n ;
     
     int sum =0;
    cin>>n;
    int actual_sum=((n)*(n+1))/2;
        int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
  int ans=actual_sum-sum;
  cout<<ans;
   
   
    }