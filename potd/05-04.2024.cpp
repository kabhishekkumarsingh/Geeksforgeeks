//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int solve(vector<int>& nums, int prev, int curr, vector<vector<int>>& dp) {
        if(curr >= nums.size()) return 0;
        
        if(dp[prev + 1][curr] != -1) return dp[prev + 1][curr];
        
        int include = 0;
        if(prev == -1 || (nums[curr] > nums[prev] && nums[curr] - nums[prev] >= curr - prev)) 
            include = 1 + solve(nums, curr, curr + 1, dp);
            
        int exclude = solve(nums, prev, curr + 1, dp);
        
        return dp[prev + 1][curr] = max(include, exclude);
    }
    
    // tabulation + space optimal
    int solveTab(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(2, vector<int>(n + 1, 0));
        
        for(int curr = n - 1; curr >= 0; --curr) {
            for(int prev = curr - 1; prev >= -1; --prev) {
                int include = 0;
                if(prev == -1 || (nums[curr] > nums[prev] && nums[curr] - nums[prev] >= curr - prev)) 
                    include = 1 + dp[1][curr + 1];
                    
                int exclude = dp[1][prev + 1];
                dp[0][prev + 1] = max(include, exclude);
            }
            dp[1] = dp[0];
        }
        
        return dp[0][0];
    }

    int min_operations(vector<int>& nums) {
        int n = nums.size();
        // for memoization
        // vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        // int lis = solve(nums, -1, 0, dp);
        
        // for tabulation
        int lis = solveTab(nums);
        
        return (n - lis);
    }


};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
