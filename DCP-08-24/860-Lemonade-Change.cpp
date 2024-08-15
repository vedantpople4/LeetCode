class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> mp(3,0);
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                mp[0]++;
            } else if(bills[i]==10){
                mp[1]++;
                mp[0]--;
                if(mp[0]<0) return false;
            } else {
                if(mp[1]){
                mp[1]--;
                mp[0]--;
                }
                else{
                    mp[0] -= 3;
                }
                if(mp[1]<0 || mp[0]<0){
                    return false;
                }
            }
        }
        return true;
    }
};