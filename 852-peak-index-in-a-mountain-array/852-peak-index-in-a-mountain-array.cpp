class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = 0;
        int pos = 0;
        for(int i=0; i<arr.size(); i++){
            if(max<arr[i]){
                max = arr[i];
                pos = i;
            }
        }
        return pos;
    }
};
               

        
       