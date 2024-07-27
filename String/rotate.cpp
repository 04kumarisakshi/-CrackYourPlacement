
 #include<bits/stdc++.h>
using namespace std;

int main()
    {
      string s,goal;
      cin>>s>>goal;
      if (s.length() != goal.length()) {
           cout<<"false";
        }

                for (int i = 0; i < s.length(); i++) {
            string temp = s.substr(i) + s.substr(0, i);
            cout<<s.substr(i)<<" ";
            if (temp == goal) {
               cout<<"true";
               
            }
        }

        cout<<"false";
    
    }