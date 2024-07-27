 #include<bits/stdc++.h>
using namespace std;

 string remove(string s)
 {
 int n=s.size();
        string ans="";
        int b=0;
        for(int i=0;i<n;i++){
        if(s[i] == '(')
        {
            if(b>0)
            {
                ans=ans+s[i];
            }
            b++;
        }
        else{
            b--;
          
                     if(b>0)
                 {
                    ans=ans+s[i];
                 }
            
        }      
          }
          return ans;
    }
    int main()
    {
       string s;
       cin>>s;
       string ans=remove(s);
       cout<<ans;
    }