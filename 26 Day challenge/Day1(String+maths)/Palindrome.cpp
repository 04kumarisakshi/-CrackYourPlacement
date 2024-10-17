#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if(!isalnum(s[start]))
        {
            start++;

        }
         if(!isalnum(s[end]))
        {
            end--;
            
        }
        if(islower(s[start]!=islower(s[end])))
        {
            cout<<"false";
        }
        else{
            start++;
            end--;
        }
        cout<<"true";
    }
}