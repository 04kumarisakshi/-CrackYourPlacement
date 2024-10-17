
#include<bits/stdc++.h>
using namespace std;
int max_profit(int n,int num[])
{
    
        int mini=num[0];
        int profit=0;
        for(int i=0;i<n;i++)
        {
            if(num[i]<mini)
            {
                mini=num[i];
             
            }
               profit=max(profit,num[i]-mini);
        }
        cout<<profit;
}
int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
max_profit(n,num);
}