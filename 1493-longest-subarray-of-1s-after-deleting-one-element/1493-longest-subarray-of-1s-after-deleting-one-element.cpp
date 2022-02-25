class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int prev = 0;
        int cur = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]) cur++;
            else{
                ans = max(ans, prev+cur);
                prev = cur;
                cur = 0;
            }
        }
        ans = max(ans, prev+cur);
        if(ans==nums.size()) ans--;
        return ans;
    }
};
