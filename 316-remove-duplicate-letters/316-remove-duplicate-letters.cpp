class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> count(26,0)  , visit(26,0);
        
        string result = "";
        int n = s.size();
        
        for(int i = 0; i<n; ++i)
            count[s[i] - 'a']++;
        
        for(int i = 0; i<n; ++i)
        {
            count[s[i] - 'a']--;
            if(!visit[s[i]- 'a'])
            {
                while(result.size() > 0 && result.back() > s[i] && count[result.back() - 'a'] > 0)
                {
                    visit[result.back() - 'a'] = 0;
                    result.pop_back();
                }
                result += s[i];
                visit[s[i] - 'a'] = 1;
            }
        }
        return result;
    }
};