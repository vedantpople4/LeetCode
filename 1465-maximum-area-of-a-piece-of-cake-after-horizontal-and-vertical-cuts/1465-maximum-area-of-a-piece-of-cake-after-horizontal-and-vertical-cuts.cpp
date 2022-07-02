class Solution {
public:
    int maxArea(int h, int w, vector<int>& hcuts, vector<int>& vcuts) {
        hcuts.push_back(h);
        hcuts.push_back(0);
        vcuts.push_back(w);
        vcuts.push_back(0);
        sort(hcuts.begin(), hcuts.end());
        sort(vcuts.begin(), vcuts.end());
        vector<long long int> vdiff, hdiff;
        for(int i=0;i<vcuts.size()-1;i++) vdiff.push_back(vcuts[i+1] - vcuts[i]);
        for(int i=0;i<hcuts.size()-1;i++) hdiff.push_back(hcuts[i+1] - hcuts[i]);
        sort(vdiff.begin(), vdiff.end());
        sort(hdiff.begin(), hdiff.end());
        return (*max_element(vdiff.begin(), vdiff.end()) * *max_element(hdiff.begin(), hdiff.end()))%1000000007;
    }
};