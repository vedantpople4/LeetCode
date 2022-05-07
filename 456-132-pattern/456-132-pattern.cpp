class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int minans = INT_MIN;
        int n = nums.size()-1;
        stack<int> s;
        for(int i=n;i>=0;i--){
            if(nums[i]<minans) return true;
            else{
                while(!s.empty() && nums[i]>s.top()){
                        minans = s.top();
                        s.pop();
                    }
                }
                s.push(nums[i]);
        }
        return false;
    }
};