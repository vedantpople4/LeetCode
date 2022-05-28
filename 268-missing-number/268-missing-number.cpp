class Solution {
public:
    int missingNumber(vector<int>& nums) {    
        int ans = accumulate(nums.begin(), nums.end(),0);
        int large = nums.size();
        int sum = large * (large+1)/2;
        return sum - ans;
    }
};