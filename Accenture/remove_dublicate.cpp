#include<bits/stdc++.h>
using namespace std;

int main(){
     int n ;
        cin>>n;
    int arr1[n];
     unordered_set<int> s ;
     
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        s.insert(arr1[i]);
      
    }
    
     vector<int> v (s.begin(),s.end());
   int len=v.size();
    for(int i=len-1 ;i>=0;i--)
    {
    cout<<v[i]<<" ";
    }
}