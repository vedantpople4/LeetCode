class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int mini = INT_MAX, maxi = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=mini) mini = nums[i];
            else if(nums[i]<=maxi) maxi = nums[i];
            else return true;
        }
        return false;
    }
};