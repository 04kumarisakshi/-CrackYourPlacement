// Given  integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
#include<bits/stdc++.h>
using namespace std;


// 1 st approch
int product(int n,int num[],int k)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(num[i] == num[j])
        {
            if(abs(i - j) <= k)
            {
                cout<<"true";
            }
        }
    }
    cout<<"false";
}
}

// second approch tc=O(n)
// void product2(int n,int num[],int k)
// {
//     unordered_map<int,int> mp;
//          for(int i=0;i<n;i++)
//         {
//             if(mp.count(nums[i]))
//             {
//                if(abs(i-mp[nums[i]])<=k)
//                     return true;
//             }
//                         mp[nums[i]] = i;

//         }
//         return false;
// }

int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int k;
    cin>>k;
product(n,num,k);
}