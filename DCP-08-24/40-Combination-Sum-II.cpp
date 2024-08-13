class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans, temp, nums, target, 0);
        return ans;
    }
    void solve(vector<vector<int>> &ans, vector<int> &temp, vector<int> &nums, int target, int idx){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(idx==nums.size()){
            return;
        }

        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])
            continue;
            if(nums[i]<=target){
                temp.push_back(nums[i]);
                solve(ans, temp, nums, target-nums[i], i+1);
                temp.pop_back();
            }
            else return;
        }
    }
};