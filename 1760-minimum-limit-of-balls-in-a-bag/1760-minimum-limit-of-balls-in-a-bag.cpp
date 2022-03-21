class Solution {
public:
    bool solve(vector<int> &a, int maxOperations, int mid){
        int result = 0;
        int n = a.size();
        for(int i=0;i<n;i++){
            int x = a[i]/mid;
            if(a[i]%mid==0) x--;
            result += x;
        }
        return result <= maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int l = 1, h = *max_element(nums.begin(), nums.end());
        int ans = *max_element(nums.begin(), nums.end());
        while(l<=h){
            int mid = l + (h-l)/2;
            if(solve(nums, maxOperations, mid)){
                ans = mid;
                h = mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};

