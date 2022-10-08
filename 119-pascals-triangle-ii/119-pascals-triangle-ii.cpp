class Solution {
public:
    vector<int> getRow(int n) {
        if(n==0) return {1};
        if(n==1) return {1,1};
        vector<int> ans = getRow(n-1);
        for(int i=ans.size()-1;i>0;i--){
            ans[i] = ans[i]+ans[i-1];
        }
        ans.push_back(1);
        return ans;
    }
};