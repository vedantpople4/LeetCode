class Solution {
public:
    int specialArray(vector<int>& nums) {
        int a = 1;
        int maxx = 0;
        sort(nums.begin(), nums.end());
        while(a<=nums.size()){
            int count = 0;
            for(auto i:nums){
                if(i>=a) count++;
            }
            if(count == a) maxx = max(maxx, count);
            a++;
        }
        if (maxx==0) return -1;
        else return maxx;    
    }
};