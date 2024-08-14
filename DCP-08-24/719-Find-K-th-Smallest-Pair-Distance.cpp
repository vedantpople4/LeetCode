class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.back()-nums[0];
        while(right > left){
            int mid = (right+left)/2;
            int dist = 0;
            for(int i=0;i<nums.size();i++){
                int j = lower_bound(nums.begin(), nums.end(), (nums[i]-mid))-nums.begin();
                dist += (i-j);
            }
            if(k>dist) left = mid+1;
            else right = mid;
        }
        return left;
    }
};