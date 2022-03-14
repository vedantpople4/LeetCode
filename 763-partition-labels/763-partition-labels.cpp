class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans, v(26,0), temp(26,0);
        for(int i=0;i<s.size();i++) v[s[i]-'a']++;
        int count = 0;
        for(int i=0;i<s.size();i++){
            temp[s[i]-'a'] = 1;
            count++;
            if(v[s[i]-'a']==1){
                v[s[i]-'a']--;
                int f = 0;
                for(int i=0;i<26;i++){
                    if(temp[i]==1){
                        if(v[i]!=0){
                            f = 1;
                            break;
                        }
                    }
                }
                if(f==1) continue;
                else{
                    ans.push_back(count);
                    count = 0;
                    temp = {0};
                }
            }
            else v[s[i]-'a']--;
        }
        return ans;
        
    }
};