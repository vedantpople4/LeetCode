class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        vector<int> len = {1};
    int j = 0;
    for(int i=0; i<nums.size()-1; ++i){
        if(nums[i]==nums[i+1]) continue;
        else if(nums[i]==nums[i+1]-1) ++len[j];
        else{
            len.push_back(1);
            j++;
        }
    }
    sort(len.begin(), len.end(), greater<int>());
    return len[0];
    }
};