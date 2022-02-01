class Solution {
public:
    bool isHappy(int n) {
        int num = n , digit , sum=0;
        if(n>1 && n<7) return false;
        while(n>0)
        {
            digit=n%10;
            sum += digit*digit;
            n=n/10;
        }
        if(sum==1)return true;
        else return isHappy(sum);
    }
};

