class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n,0);
        priority_queue<pair<int, int>> p;
        for(int i=n-1;i>=0;i--){
           while(p.size() && p.top().second>i+k) p.pop();
            dp[i] = dp[i] + nums[i] + (p.size() ? p.top().first:0);
            p.push({dp[i], i});
        }
        return dp[0];                               
    }
};

