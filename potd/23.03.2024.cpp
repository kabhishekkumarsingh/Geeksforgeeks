//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int mod=1e9+7;
        vector<int>ans;
        int a=0;
        int b=1;
        int c=0;
        ans.push_back(a);
        ans.push_back(b);
        for(int i=1;i<n;i++){
           c=(a+b)%mod;
           a=b%mod;
           b=c%mod;
           ans.push_back(c%mod);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
