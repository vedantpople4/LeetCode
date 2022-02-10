class Solution {
public:
    int minimumTotal(vector<vector<int>>& arr) {
       // int sum = arr[0][0];
        for(int i=arr.size()-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                arr[i][j] = min(arr[i+1][j],arr[i+1][j+1]) + arr[i][j];          
            }
        }
        return arr[0][0];
    }
};

