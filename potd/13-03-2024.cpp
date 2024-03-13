//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
           //Your code here
         bool up=true;
        int i=0, j=0;
        int cnt=0;
        int n=mat.size();
        vector<int> out;
        while(cnt<n*n)
        {
            if(up)
            {
                //cout<<"up"<<endl;
                while(i>=0 && j<n)
                {
                    out.push_back(mat[i][j]);
                    //cout<<mat[i][j]<<" ";
                    i--;
                    j++;
                    cnt++;
                }
                //cout<<endl;
                
                if(j==n)
                {
                    j=n-1;
                    i+=2;
                }
                else if(i<0)
                {
                    if(j==n)
                        i=1;
                    else
                        i=0;
                }
                up=false;
            }
            else
            {
                //cout<<"down"<<endl;
                while(i<n && j>=0)
                {
                    out.push_back(mat[i][j]);
                    //cout<<mat[i][j]<<" ";
                    i++;
                    j--;
                    cnt++;
                }
                //cout<<endl;
                
                
                if(i==n)
                {
                    j=j+2;
                    i=n-1;
                }
                else if(j<0)
                {
                    if(i==n)
                        j=1;
                    else
                        j=0;
                }
                up=true;
            }
            
        }
        return out;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends
