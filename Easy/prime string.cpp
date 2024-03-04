//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    bool isPrimeString(int N, string str)
    {
    	//code here.
    	int s=0;
    	for(int i=0;i<N;i++){
    	    s+=int(str[i]);
    	}
    	if(s==1) return false;
    	for(int i=2;i<sqrt(s);i++){
    	    if(s%i==0) return false;
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        int n;
        cin>>n>>str;
        Solution ob;
        if (ob.isPrimeString(n, str))
            cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
    }
	return 0;
}


// } Driver Code Ends
