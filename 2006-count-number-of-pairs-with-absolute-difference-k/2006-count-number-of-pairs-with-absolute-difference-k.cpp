class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0 ;
        for(int i=0;i<nums.size();i++){
            int j = i+1;
            while(j<nums.size()){
                if(abs(nums[i]-nums[j])==k) ans++;
                j++;
            }
        }
        return ans;
    }
};