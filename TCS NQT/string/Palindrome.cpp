#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int start=0;
    int end=s.size();
    // string r = s;
    // reverse(s.begin(),s.end());
    // if(s==r)
    // {
    //     cout<<"true";

    // }
    // else{
    //     cout<<"false";
    // }
    while(start<end)
    {
        if(!isalnum(s[start]))
        {
            start++; continue;
        }
         if(!isalnum(s[end]))
        {
            end--; continue;
        }
        if(tolower(s[start]!=tolower(s[end])))
        {
            cout<<"false";
        }
        else{
            cout<<"true";
        }
        
    }
}