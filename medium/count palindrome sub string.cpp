//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends

bool pl(string s){
    int l=0;
    int h=s.length()-1;
    while(l<h){
        if(s[l]!=s[h]) return false;
        l++;
        h--;
    }
    return true;
}
int CountPS(char S[], int n)
{
    //code here
    int c=0;
    for(int i=0;i<n;i++){
        string s="";
        s.push_back(S[i]);
        for(int j=i+1;j<n;j++){
            s.push_back(S[j]);
            if(pl(s)) c++;
        }
    }
    return c;
    
}
