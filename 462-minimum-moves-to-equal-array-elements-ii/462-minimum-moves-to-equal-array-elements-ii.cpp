class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int med = nums[nums.size()/2];
        for(int i=0;i<nums.size();i++){
            ans += abs(nums[i]-med);
        }
        return ans;
    }
};