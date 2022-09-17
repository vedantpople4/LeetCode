class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        int mid;
        while(right>=left){
            mid = (left+right)/2;
            if(nums[right]>nums[left]){
                mid = left;
                break;
            }
            if(nums[mid]<nums[left]) right = mid;
            else left = mid+1;
        }
        return nums[mid];
    }
};