class Solution{
  public:
    vector<int> countArray(int a[], int n, int x){
        // Complete the function
       int  count=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((a[i]+x)/2==a[j]) count++;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }

};
