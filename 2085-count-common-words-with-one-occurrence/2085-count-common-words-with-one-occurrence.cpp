class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m1;
        unordered_map<string, int> m2;
        int ans = 0;
        for(int i=0;i<words1.size();i++) m1[words1[i]]++;
        for(int i=0;i<words2.size();i++) m2[words2[i]]++;
        for(int i=0;i<words1.size();i++){
            for(int j=0;j<words2.size();j++){
                if(words1[i]==words2[j] && m1[words1[i]]==1 && m2[words2[j]]==1) ans++;
            }
        }
        return ans;
    }
};
