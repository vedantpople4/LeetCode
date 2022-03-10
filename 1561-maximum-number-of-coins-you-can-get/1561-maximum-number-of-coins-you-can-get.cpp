class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans =0;
        sort(piles.begin(), piles.end());
        int left = 0, right = piles.size()-2;
        while(left<right){
            ans+=piles[right];
            left++;
            right-=2;
        }
        return ans;
    }
};

