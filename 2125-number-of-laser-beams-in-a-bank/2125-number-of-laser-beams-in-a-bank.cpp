class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count = 0,ans = 0;
        for(int i=0;i<bank.size();i++){
            int curr = 0;
            for(char i:bank[i]){
                if(i=='1'){
                    count +=ans;
                    curr++;
                }
            }
            if(curr!=0) ans = curr;
        }
        return count;
    }
};

