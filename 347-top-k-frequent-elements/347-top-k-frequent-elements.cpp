class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        unordered_map<int, int> map;
        for(auto x:nums){
            map[x]++;
        }
        priority_queue<pair<int, int>> q;
        for(auto val:map){
            q.push({val.second, val.first});
        }
        while(k--){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};