class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26,0);
        for(auto e : s) v[e-'a']++;
        sort(v.begin(), v.end(), greater<int>());
        int mf = v[0];
        int ans = 0;
        for(auto f : v){
            if(f > mf){
                if(mf > 0) ans += (f - mf);
                else ans += f;
            }
            mf = min(mf -1 , f-1);
        }
        return ans;
    }
};