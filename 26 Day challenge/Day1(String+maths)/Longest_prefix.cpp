#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
string arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
string s=arr[0];
string t=arr[n-1];
int m=s.size();
for(int i=0;i<m;i++)
{if(s[i]==t[i])
count++;
}
cout<<count;
}