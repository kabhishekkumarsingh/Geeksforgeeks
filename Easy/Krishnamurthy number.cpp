//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int fact(int n){
      if(n==0) return 1;
      else return n*fact(n-1);
  }
    string isKrishnamurthy(int n) {
        // code here
        int m=n;
        int f=0;
        while(n>0){
            f+=fact(n%10);
            n=n/10;
        }
        if(m==f) return "YES";
        else return "NO";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
