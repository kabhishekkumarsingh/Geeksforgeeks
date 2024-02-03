//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int>ans;
            int l=0,u=0,st=0,n=0;
            for(int i=0;i<s.length();i++){
                if(int(s[i])>=97 && int(s[i])<=122) l++;
                else if(int(s[i])>=65 && int(s[i])<=90) u++;
                else if(int(s[i])>=48 && int(s[i])<=57) n++;
                else st++;
            }
            ans.push_back(u);
            ans.push_back(l);
            ans.push_back(n);
            ans.push_back(st);
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends }
};
