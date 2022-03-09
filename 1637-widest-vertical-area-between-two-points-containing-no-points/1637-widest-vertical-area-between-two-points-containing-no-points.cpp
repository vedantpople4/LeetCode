class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        for(int i=0;i<points.size();i++){
             x.push_back(points[i][0]);
        }
        vector<int> dif;
        sort(x.begin(), x.end());
        for(int i=0;i<x.size()-1;i++) dif.push_back(x[i+1] - x[i]);
        return *max_element(dif.begin(), dif.end());
    }
};