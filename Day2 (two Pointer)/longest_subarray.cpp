#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=14;
    int sum =0;
    int l=0;
    int r=0;
    int maxlength=0;
    while(r<n)
    {
        sum=sum+arr[r];
        while (sum>k)
                {
           sum=sum-arr[l];
           l++;}
           if(sum<=k)
           {
            maxlength=max(maxlength,r-l+1);
          r++;
           }
        
       
    }
    cout<<maxlength; 
}