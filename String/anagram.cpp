 
 #include<bits/stdc++.h>
using namespace std;

int main()
    {
      string s,t;
      cin>>s>>t;
 
 int n=s.length();
        int m=t.length();
        sort(s.begin(), s.end());
      sort(t.begin(), t.end());
        if(s==t)
        {
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    }