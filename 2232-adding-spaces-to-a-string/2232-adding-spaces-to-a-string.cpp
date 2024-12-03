class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int curr = 0, i=0, n = s.size(), m = spaces.size();
        string ans = "";
        cout<<n<<" "<<m<<endl;
        while(i<n && curr<m){
            if(spaces[curr]==i){
                ans += ' ';
                curr++;
            } else {
                ans += s[i];
                i++;
            }
        }
        ans+=s.substr(spaces[m-1], n - spaces[m-1]);
        return ans;
    }
};