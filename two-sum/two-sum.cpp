class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        bool value = false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(target==nums[j]+nums[i]){
                    ans.push_back(i);
                    ans.push_back(j);
                    value = true;
                }
            }
            if(value==true) break;
        }
        return ans;
        }
};