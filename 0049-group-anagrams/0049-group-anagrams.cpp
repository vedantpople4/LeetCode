class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string a = strs[i];
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(a);
        }
        for (auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};