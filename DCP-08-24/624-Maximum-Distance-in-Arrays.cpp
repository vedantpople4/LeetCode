class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        int mini = INT_MAX/2, maxi = INT_MIN/2, ans = 0;
        for(auto it:arrays){
            ans = max(ans, max(it.back() - mini, maxi - it.front()));
            maxi = max(maxi, it.back());
            mini = min(mini, it.front());
        }
        return ans;
    }
};