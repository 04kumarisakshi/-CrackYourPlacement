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
    int k=4;
    int lsum=0;
    int rsum=0; 
    int maxsum=0;
    for(int i=0;i<k;i++)
    {
        lsum=lsum+arr[i];
       
    }
     maxsum=lsum;
       
    int rindex=n-1;
    for(int i=k-1;i>=0;i--)
    {
        lsum=lsum-arr[i];
        rsum =rsum+arr[rindex];
        rindex--;
        int sum=lsum+rsum;
        maxsum=max(maxsum,sum);
        
    }
    cout<<maxsum<<" ";

}