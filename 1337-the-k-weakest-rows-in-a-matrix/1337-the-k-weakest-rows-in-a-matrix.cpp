class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> a;
        vector<int> ans(k);
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1) count++;
            }
            a.push_back(make_pair(count,i));
        }
        sort(a.begin(), a.end());
        for(int i=0;i<k;i++) ans[i] = a[i].second;
        return ans;
    }
};
