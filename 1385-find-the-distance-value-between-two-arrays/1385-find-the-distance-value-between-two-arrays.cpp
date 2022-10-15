class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        for(int i=0;i<arr1.size();i++){
            bool get = false;
            for(int j=0;j<arr2.size() && !get; j++){
                if(abs(arr1[i] - arr2[j])<=d) get = true;
            }
            if(!get) ans++;
        }
        return ans;
    }
};