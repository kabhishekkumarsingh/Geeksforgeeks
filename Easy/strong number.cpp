//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
	int fact(int n){
	    if(n==0) return 1;
	    else return n*fact(n-1);
	}
		int is_StrongNumber(int n)
		{
		    // Code here.
		    int x=n;
		    int y=0;
		    while(n>0){
		        y+=fact(n%10);
		        n=n/10;
		    }
		    if(y==x) return 1;
		    else return 0;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
