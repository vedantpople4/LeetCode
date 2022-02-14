class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int i=1;
        if(n%2==0){
        while(n>1){
            ans.push_back(i);
            ans.push_back(-1 *i);
            i++;
            n-=2;
            
        }
        }
        else{
            while(n>1){
                ans.push_back(i);
                ans.push_back(-1*i);
                i++;
                n-=2;
            }
            ans.push_back(0);
        }
        return ans;
    }
};