#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
cin>>s;
int n=s.size();
int l=0;
int r=n-1;
while(l<r)
{
    if(s[l]!=s[r])
    {
        cout<<"0";
    }
    l++;r--;
}
cout<<"1";
}