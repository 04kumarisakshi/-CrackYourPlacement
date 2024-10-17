#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    int len=s.size();
    int st=0;
    int en=len-1;
    while(st<en)
    {
        if(s[st]!=s[en])
        {cout<<"false";
        break;
       }
        else{
            st++;en--;
        }
       
    }
    cout<<"true";
}