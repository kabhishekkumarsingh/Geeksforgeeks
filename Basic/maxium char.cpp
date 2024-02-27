//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char,int>mp;
        for(auto i:str) mp[i]++;
        char ch=str[0];
        int a=1;
        for(int i=0;i<str.length();i++){
            if(mp[str[i]]>a){
                
                ch=str[i];
                a=mp[str[i]];
            }
            else if(mp[str[i]]==a){
                if(str[i]<ch) ch=str[i];
                a=mp[str[i]];
            }
        }
        return ch;
    }
    

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
