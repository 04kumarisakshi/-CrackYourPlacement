   #include<bits/stdc++.h>
using namespace std;
string longestcommon(string num[],int n)
{
sort(num,num+n);
string s=num[0];
string e=num[n-1];
string ans="";
int m=s.size();
for(int i=0;i<m;i++)
{
    if(s[i]==e[i])
    {
        ans=ans+s[i];
    }
}
return ans;
}

int main()
    {
       int n;
      cin>>n;
       string num[n];
       for(int i=0;i<n;i++)
       {
        cin>>num[i];
       }
       string ans=longestcommon(num,n);
       cout<<ans;
    }