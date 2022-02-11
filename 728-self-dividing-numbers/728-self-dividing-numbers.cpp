class Solution {
public:
    bool selfdividing(int i){
            int n = i, x;
            while(n){
                x = n%10;
                if(x==0 || i%x) return false;
                n/=10;
            }
            return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            if(i<=9) ans.push_back(i);
            else {
                if(selfdividing(i))
                ans.push_back(i);
            }
              
        }
      return ans;  
    }    
};

