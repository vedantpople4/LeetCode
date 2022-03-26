class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int l=0, r=0;
        unordered_map<char, int> map;
        int temp=0;
        while(r<s.size()){
            if(map[s[r]]==0){
                int len = r-l+1;
                ans = max(ans, len);
                map[s[r]]++;
                r++;
            }    
            else{
                map[s[l]]--;
                l++;
            }
        }
        return ans;
    }
};  