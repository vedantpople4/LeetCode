class Solution {
public:
    static bool comp(const pair<string,int> &p1, const pair<string,int> &p2){
       if(p1.second != p2.second) return p1.second > p2.second;
       else return p1.first < p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for(auto a: words){
            m[a]++;
        }
        vector<pair<string, int>> pr;
        for(auto i=m.begin();i!=m.end();i++){
            pr.push_back(make_pair(i->first, i->second));
        }
        sort(pr.begin(), pr.end(), comp);
        vector<string> ans;
        int i = 0;
        while(k--){
            ans.push_back(pr[i].first);
            i++;
        }
        return ans;
    }
};