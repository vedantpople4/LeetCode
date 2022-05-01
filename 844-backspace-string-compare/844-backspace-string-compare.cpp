class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> ss, tt;
        int n = s.size(), m = t.size();
        for(int i=0;i<n;i++){
            if(s[i]!='#') ss.push_back(s[i]);
            else if (!ss.empty()) ss.pop_back();
        }
        for(int i=0;i<m;i++){
            if(t[i]!='#') tt.push_back(t[i]);
            else if(!tt.empty()) tt.pop_back();
        }
        return ss==tt;
    }
};