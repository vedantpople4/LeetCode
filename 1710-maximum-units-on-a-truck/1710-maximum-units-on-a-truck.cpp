class Solution {
public:
    static bool compare(const vector<int> &a, const vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        sort(box.begin(), box.end(), compare);
        int ans = 0;
        for(int i=0;i<box.size();i++){
            if(box[i][0]>=truckSize){
                ans += truckSize * box[i][1];
                truckSize = 0;
            }
            else {
                truckSize -= box[i][0];
                ans += box[i][0]*box[i][1];
            }
        }
        return ans;
    }
};