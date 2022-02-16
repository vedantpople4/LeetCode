class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        int last7 = 0;
        int last30 = 0;
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        for(int i=1; i<=n; i++){
            while(days[i-1] - days[last7] >= 7) last7++;            
            while(days[i-1] - days[last30] >= 30) last30++;
            dp[i] = min({dp[i-1] + costs[0], dp[last7] + costs[1], dp[last30] + costs[2]});
        }
        return dp[n];
    }
};