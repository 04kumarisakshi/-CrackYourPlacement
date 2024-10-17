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
    int w=4;
    int l=0;
    int r=w-1;
    int sum =0;
    int maxsum=INT_MIN;
for(int i=0;i<4;i++)
{
    sum=sum +arr[i];
}
maxsum=sum;

while(r<n-1)
{
sum=sum-arr[l];
l++;r++;
sum=sum+arr[r];
maxsum=max(maxsum,sum);
}
cout<<maxsum;
}