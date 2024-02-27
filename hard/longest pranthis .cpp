//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        int c=0;
        stack<char>st;
        stack<int>a;
        for(int i=0;i<S.length();i++){
            if(!st.empty() && (st.top()=='(' && S[i]==')')){
                st.pop();
                a.pop();
                a.empty()? c=i+1: c=max(c,i-a.top());
            }
            else {
                st.push(S[i]);
                a.push(i);
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
