#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
        sort(s.begin(),s.end());
    string t;
    cin>>t;
   sort(t.begin(),t.end());
   if(s==t)
   {
    cout<<"yes anagram";
   }
   else{
    cout<<"not anagram";
   }

}