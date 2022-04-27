class Solution {
    unordered_map<int, int> map;
public:
    void init_map(string s){
        for(int i=0;i<s.size();i++) map[i] = i;
    }
    int find(int a){
        if(map[a]==a) return a;
        return map[a]=find(map[a]);
    }
    void union_set(int a, int b){
        int x = find(map[a]);
        int y = find(map[b]);
        if(x==y) return;
        map[x] = y;
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        init_map(s);
        for(int i=0;i<pairs.size();i++){
            union_set(pairs[i][0], pairs[i][1]);
        }
        vector<vector<char>> chars(s.size());
        vector<vector<int>> indexes(s.size());
        for(int i=0;i<s.size();i++){
            int r = find(map[i]);
            chars[r].push_back(s[i]);
            indexes[r].push_back(i);
        }
        for(int j=0;j<s.size();j++){
            if(chars[j].size()){
                sort(chars[j].begin(), chars[j].end());
            }
            for(int len=0; len<chars[j].size();len++){
                s[indexes[j][len]] = chars[j][len];
            }
        }
        return s;
    }
};