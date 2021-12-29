class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long result = x%10;
        for(int i=x/10; i!=0; i/=10){
            result = result*10 + i%10;
        }
        return x==result;
    }
};