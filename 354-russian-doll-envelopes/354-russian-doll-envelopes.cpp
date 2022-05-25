class Solution {
public:
    static bool compare(vector<int> &a , vector<int> &b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0] < b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        sort(envelopes.begin(), envelopes.end(), compare);
        vector<int> l;
        for(int i=0;i<n;i++){
            int h = envelopes[i][1];
            auto ind = lower_bound(l.begin(), l.end(), h) - l.begin();
            if(ind == l.size())
                l.push_back(h);
            else l[ind] = h;
            
        }
        return l.size();
    }
};