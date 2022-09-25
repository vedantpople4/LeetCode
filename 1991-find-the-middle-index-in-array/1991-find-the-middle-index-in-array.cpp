class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int prev = 0;
        for(int i=0;i<nums.size();i++){
            if((sum - prev - nums[i]) == prev) return i;
            prev += nums[i];
        }
        return -1;
    }
};