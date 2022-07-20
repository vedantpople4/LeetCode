class Solution {
public:
    bool check(string s, string t){
        int k = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==t[k])k++;
            if(k==t.length()) return true;
        }
        return false;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        map<string, int> mp;
        for(auto e : words){
            mp[e]++;
        }
        int count = 0;
        for(auto e:mp){
            if(check(s, e.first)){
                count+=e.second;
            }
        }
        return count;
    }
};