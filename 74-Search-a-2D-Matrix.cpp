class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int left = 0, right = (n*m)-1;
        while(right >= left){
            int mid = left + (right-left)/2;
            int elem = matrix[mid/m][mid%m];
            if(elem == target) return true;
            else if(elem<target){
                left = mid+1;
            }
            else right = mid-1;
        }
        return false;
    }
};