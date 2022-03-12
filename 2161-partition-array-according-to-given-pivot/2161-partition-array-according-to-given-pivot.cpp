class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> prev, next;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) prev.push_back(nums[i]);
            else if(nums[i]>pivot) next.push_back(nums[i]);
            else count++;
        }
        while(count!=0){
            prev.push_back(pivot);
            count--;}
        for(int i=0;i<next.size();i++) prev.push_back(next[i]);
        
        return prev;
    }
};
