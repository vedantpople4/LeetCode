class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int ans = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[ans-1]){
                nums[ans]=nums[i];
                ans++;
            }
        }
        return ans;
    }
};