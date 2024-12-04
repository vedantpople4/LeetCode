class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.size(), m = str2.size(), i = 0, curr = 0;
        if(m > n) return false;
        //cout<<(str1[i]+1)-'a'<<endl;
        while(i<n && curr<m){
            if((str1[i]==str2[curr]) || (str1[i]=='z' && str2[curr]=='a') || (str1[i]+1 == str2[curr])){
                i++;
                curr++;
            } else {
                i++;
            }
        }
        return curr==m;
    }
};