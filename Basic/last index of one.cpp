//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int c=-1;
      for(int i=0;i<s.length();i++)
          if(s[i]=='1') c=i;
          if(c>=0) return c;
          else return -1;

      }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
