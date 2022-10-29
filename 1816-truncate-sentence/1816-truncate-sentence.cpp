class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int j = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') j++;
            if(j==k) break;
            ans+=s[i];
        }
    return ans;
    }
};