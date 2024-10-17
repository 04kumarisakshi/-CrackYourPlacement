#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s=to_string(n);
string r = s;
reverse(s.begin(),s.end());
if(s==r)
{
    cout<<"yes";
}
else{
    cout<<"No";
}
}