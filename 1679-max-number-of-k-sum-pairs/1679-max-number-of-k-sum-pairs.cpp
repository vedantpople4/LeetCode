class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1;
        while(right>left){
            int sum = nums[right]+nums[left];
            if(sum == k){
                count++;
                left++;
                right--;
            }if(sum<k){
                left++;
            }if(sum>k){
                right--;
            }
        }
        return count;
    }
};