class Solution {
public:
    static bool compare(pair<int, int> &a, pair<int, int> &b){
        if(a.second==b.second) return a>b;
        return b.second > a.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int, int>> ans;
        vector<int> v;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            ans.push_back(i);
        }
        sort(ans.begin(), ans.end(), compare);
        for(int i=0;i<ans.size();i++){
            while(ans[i].second--)
                v.push_back(ans[i].first);
        }        
        return v;
    }
};