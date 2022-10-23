class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n+1, 0);
        vector<int> v;
        for(auto i:nums){
            ans[i]++;
            if(ans[i]>1) v.push_back(i);
        }
        for(int i=1;i<n+1;i++){
            if(ans[i]==0) v.push_back(i);
        }
        return v;
    }
};