class Solution {
public:
    vector<int> sides = {0,0,0,0};
    bool helper(vector<int> &sticks, int i, int n , int target){
        if(i==n) return true;
        for(int k=0;k<4;k++){
            if(sides[k]+sticks[i]<=target){
                sides[k] += sticks[i];
                if(helper(sticks, i+1,n,target)) return true;
                sides[k] -= sticks[i];
            }
        }
        return false;
    }
    bool makesquare(vector<int>&sticks) {
        int n = sticks.size();
        int sum = 0;
        for(int i=0;i<n;i++) sum+=sticks[i];
        if(sum%4) return false;
        int target = sum/4;
        sort(sticks.begin(), sticks.end(), greater<int>());
        return helper(sticks, 0, n , target);
    }
};