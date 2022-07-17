class Solution {
public:
    int kInversePairs(int n, int k) {
        int m=1000000007;
        vector<vector<int>> dp(n+1,vector<int>(k+1,0));
        for(int i=1;i<=n;i++) dp[i][0]=1;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=k;j++) {
                dp[i][j]=((long long)dp[i-1][j]-(j>=i?dp[i-1][j-i]:0)+(j>0?dp[i][j-1]:0)+m)%m;
            }
        }
        return ((long long)dp[n][k]-(k>0?dp[n][k-1]:0)+m)%m;
    }
};