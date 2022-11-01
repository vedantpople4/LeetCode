class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        while(num>=1){
            digits.push_back(num%10);
            num/=10;
        }
        sort(digits.begin(), digits.end());
        //cout<<digits[];
        int ans = (digits[1]*10 + digits[3]) + (digits[0]*10 + digits[2]);
        return ans;
    }
};