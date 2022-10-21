class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int curr = nums[i];
            if(mp.find(curr)!=mp.end()){
                if(abs(i-mp[curr])<=k) return true;  
                mp[curr] = i;
            }
            mp[curr] = i;
        }
        return false;
    }
};