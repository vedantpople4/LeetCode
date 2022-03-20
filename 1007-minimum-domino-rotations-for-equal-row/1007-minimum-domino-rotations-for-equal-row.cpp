class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> counttop(7,0), countbottom(7,0), same(7,0);
        for(int i=0;i<tops.size();i++){
            counttop[tops[i]]++;
            countbottom[bottoms[i]]++;
            if(tops[i]==bottoms[i]) same[tops[i]]++;            
        }
        for(int i=0;i<7;i++){
            if((counttop[i]+countbottom[i]-same[i]) == tops.size()) return tops.size() - max(counttop[i], countbottom[i]);
        }
        return -1;
    }
};

