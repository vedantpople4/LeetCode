class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target){
        sort(nums.begin(), nums.end());
        int currsum = nums[0] + nums[1] + nums[nums.size()-1];
        for(int i = 0; i<nums.size()-2;i++){
            int left = i+1, right = nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == target) return sum;
                if(abs(sum-target) < abs(currsum-target)) currsum = sum;
                if(sum<target) left++;
                else right--;
            }
        }
    return currsum;
    }
};