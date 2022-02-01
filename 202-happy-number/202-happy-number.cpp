class Solution {
public:
    bool isHappy(int n) {
        int x=0, sum=0;
        if(n>1 && n<7) return false;
        while(n>0)
        {
            x=n%10;
            sum += x*x;
            n=n/10;
        }
        if(sum==1)return true;
        else return isHappy(sum);
    }
};

