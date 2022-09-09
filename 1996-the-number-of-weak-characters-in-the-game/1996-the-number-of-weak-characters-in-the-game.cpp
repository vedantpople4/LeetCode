class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return b[0]>a[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        int count = 0;
        int currmax = INT_MIN;
        sort(p.begin(), p.end(), compare);
        for(int i=p.size()-1;i>=0;i--){
            if(p[i][1]<currmax)
                count++;
        currmax = max(currmax, p[i][1]);
        }
        return count;
    }
    
};