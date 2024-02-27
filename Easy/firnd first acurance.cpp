//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    
    set<char>st;
    for(int i=0;i<s.length();i++){
        if(st.insert(s[i]).second==false){
            string str="";
            str+=s[i];
            return str;
        }
    }
    
    
    return "-1";
}
