class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i=0, j=nums.size()-1;
        while(j>i){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break; } 
                if(nums[i]+nums[j]>target) j--;
                else i++;
                }
        return ans;
    }
};