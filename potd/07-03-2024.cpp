//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   bool allowed(int hs, int he, const string &haystack){
         // !!! handle empty needle !!!
        if(hs > he){
            return false;
        }
        
        // use KMP here
        string needle = haystack.substr(hs,he-hs+1);
        
        vector<int> lps(needle.size(),0);
        int prevLPS, i , j;
        prevLPS = 0, i = 1;
        
        while( i < needle.size()){
            if(needle[i]==needle[prevLPS]){
                lps[i] = prevLPS +1;
                prevLPS ++;
                i++;
            }else {
                if(prevLPS == 0){
                    lps[i] = 0;
                    i++;
                }else {
                    prevLPS = lps[prevLPS-1];
                }
            }
        }
        
        i = he+1, j= 0;
        // i -> haystack, j-> needle
        while(i<haystack.size()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                
                // match
                if(j == needle.size()){
                    // match found at i-needle.size();
                    return true;
                    j = lps[j-1];
                }
            }else {
                if(j==0){
                    i++;
                }else {
                    j = lps[j-1];
                }
            }
        }
        return false;
    }
  public:
    string longestSubstring(string s, int n) {
        // code here
        int l,r;
        l = 0, r=0; // means empty
        int res_l=-1, res_r=-1;
        while(l<n && r<=n){
            if(l==r || allowed(l,r-1,s) ){
                // cout << "(" << l << "," << r << ")" << " " ;
                if(r-l > res_r-res_l){
                    res_l = l;
                    res_r = r;
                }
                r++;
            }else {
                l++;
            }
            ;
        }
        
        // cout << endl;
        // cout << "Res : " << "(" << res_l << "," <<  res_r << ")" << endl;
        if(res_l == -1){
            return string("-1");
        }else {
            return s.substr(res_l,res_r-res_l);
        }
        
        // return string("-1");
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends
