//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char>temp;
  int i=0;
  while(i<s.length()){
      if(temp.empty() ) temp.push(s[i]);
     else if ( (temp.top()=='(' && s[i]==')') || (temp.top()=='[' && s[i]==']') || (temp.top()=='{' && s[i]=='}'))
     {
      temp.pop();
     }
      else temp.push(s[i]);
      i++;
      
  }
    
if(temp.empty()) return true;
 return false;
}
};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
