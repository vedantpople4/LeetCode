class Solution {
public:
    int removePalindromeSub(string s) {
        int a = 0, b = s.size()-1;
        while(b>=a){
            if(s[a]!=s[b]) return 2;
            a++;
            b--;
        }
        return 1;
    }
};