//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  string reverseString(string s){
      int len=s.length();
      int st=0;
      int e=len-1;
      while(st<e){
          swap(s[st],s[e]);
          st++;
          e--;
      }
      return s;
  }
    string conRevstr(string s1, string s2) {
        // code here
        string ans="";
        for(int i=0;i<s1.length();i++){
            ans+=s1[i];
        }
        for(int j=0;j<s2.length();j++){
            ans+=s2[j];
        }
        return reverseString(ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends
