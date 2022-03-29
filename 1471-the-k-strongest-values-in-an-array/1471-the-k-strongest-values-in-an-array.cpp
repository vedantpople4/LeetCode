class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int m = arr[(arr.size()-1)/2];
        vector<pair<int, int>> count;
        for(auto i:arr){
            count.push_back(make_pair(abs(i-m), i));
        }
        sort(count.begin(), count.end(), greater<pair<int, int>>());
        for(int i=0;i<k;i++){
            ans.push_back(count[i].second);
        }
        return ans;
    }
};

