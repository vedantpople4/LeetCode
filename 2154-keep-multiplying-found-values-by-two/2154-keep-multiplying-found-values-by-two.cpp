class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans = original;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==original){
                original*=2;
                ans = original;
            }
        }
        return ans;
    }
};