class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.size();
        for(int j=0;j<=n;j++){
            if(s[j]==' ' || j==n){
                reverse(s.begin()+i, s.begin()+j);
                i = j+1;
            }
        }
        return s;
    }
};