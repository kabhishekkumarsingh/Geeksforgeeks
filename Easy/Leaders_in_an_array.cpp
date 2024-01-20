class Solution{
    //Function to find the leaders in the array.
    
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        
        //Push rightmost element in ans firsit
        int max=a[n-1];
        ans.push_back(max);
        
        //Finding element of array is leader from right side
        for(int i=n-2;i>=0;i--){
            if(a[i]>=max){
                max=a[i];
                ans.push_back(max);
            }
        }
        //reversing the element of ans
        int l=0,h=ans.size()-1;
        while(l<h){
            swap(ans[l],ans[h]);
            l++;
            h--;
        }
        
    return ans;
    }
};
