class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        for(int i=0;i<s.length();i++){
            if(s[i]==c) v.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            int diff, answer = INT_MAX;
            for(int j=0;j<v.size();j++){
                diff = abs(v[j]-i);
                answer = min(answer , diff);
            }
            ans.push_back(answer);
        }
        return ans;
    }
};

