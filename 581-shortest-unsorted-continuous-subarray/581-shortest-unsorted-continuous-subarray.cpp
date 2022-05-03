class Solution {
    public:
    int findUnsortedSubarray(vector<int> nums) {
       vector<int> temp=nums;
        sort(temp.begin(),temp.end());         
        int l=0,r=nums.size()-1;
        while(r>=0&&nums[r]==temp[r])
            r--;
        while(l<r&&nums[l]==temp[l])
            l++;
        return r-l+1;
    }
};