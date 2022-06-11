class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int mini = *min_element(nums.begin(), nums.end());
        if(x<mini) return -1;
        int left=0, right=0;
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;
        int cur = nums[0];
        while(left<n && right<n){
            if(cur < sum-x){
                right++;
                if(right==n) break;
                cur+=nums[right];
            }
            if(cur>sum-x){
                cur-=nums[left];
                left++;
            }
            if(cur==sum-x){
                ans = max(ans, right-left+1);
                right++;
                if(right == n) break;
                cur+=nums[right];
            }
        }
        return ans==-1 ? -1 : n-ans;
    }
};