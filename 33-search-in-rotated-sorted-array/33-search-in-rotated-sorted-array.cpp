class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
            ans = i;
        }
        if (ans>-1) return ans;
        else return -1;
    }
};