//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int max=a[0];
         int second_max=0;
         int third_max=0;
         for(int i=0;i<n;i++){
         
             if(a[i]>max) max=a[i];
         }
         for(int i=0;i<n;i++){
             if(a[i]<max && a[i]>second_max) second_max=a[i];
         }
         for(int i=0;i<n;i++){
             if(a[i]<second_max && a[i]>third_max) third_max=a[i];
         }
         return third_max;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends
