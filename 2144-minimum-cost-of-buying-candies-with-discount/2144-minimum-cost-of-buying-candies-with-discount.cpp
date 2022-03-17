class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int ans =0, count=0;
        for(int i=cost.size()-1; i>=0; i--){
            ans += cost[i];
            count++;
            if(count==2){
                i--;
                count = 0;
            }
        }
        return ans;
    }
};

