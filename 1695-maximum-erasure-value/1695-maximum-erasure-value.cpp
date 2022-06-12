class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size(), i=0, j=0, ans=0, sum=0;
        set<int> s;
        while(i<n){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
                sum+=nums[i];
                i++;
            }
            else{
                ans = max(ans, sum);
                while(nums[j]!=nums[i]){
                    sum-=nums[j];
                    s.erase(nums[j]);
                    j++;
                }
                sum-=nums[j];
                s.erase(nums[j]);
                j++;
            }
        }
        ans = max(ans, sum);
        return ans;
    }
};