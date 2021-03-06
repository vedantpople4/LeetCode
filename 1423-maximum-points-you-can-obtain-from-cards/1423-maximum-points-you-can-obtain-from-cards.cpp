class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int l = 0, r=n-k, total=0, sum=0;
        for(int i=0;i<r;i++)sum+=card[i],total+=card[i];
        int  minSum = sum;
        while(r<n){
            sum+= (card[r]-card[l]);
            total+= card[r];
            l++,r++;
            minSum = min(minSum,sum);   
        }
       return total-minSum;
    }
};