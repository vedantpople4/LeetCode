class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        int n = matches.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[matches[i][1]]++;
        }
        vector<int> oloss;
        vector<int> iloss;
        for(auto i:mp){
            if(i.second==1) iloss.push_back(i.first);
        }
        for(int i=0;i<n;i++){
            if(mp[matches[i][0]]==0){
                oloss.push_back(matches[i][0]);
                mp[matches[i][0]] = 1;
            }
        }
        sort(oloss.begin(), oloss.end());
        sort(iloss.begin(), iloss.end());
        ans.push_back(oloss);
        ans.push_back(iloss);
        return ans;
    }
};