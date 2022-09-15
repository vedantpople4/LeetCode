class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        vector<int> ans;
        queue<int> q;
        sort(a.begin(), a.end());
        for(auto i:a){
            if(q.front()!=i){
                ans.push_back(i);
                q.push(i*2);
            }
            else q.pop();
        }
        if(!q.empty()) return {};
        return ans;
    }
};