class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;   
        using ll=long long;
        ll Dividend=abs(dividend),Divisor=abs(divisor);
        int sign = divisor>0 ^ dividend>0 ? -1:1;
        ll answer=0;
        while(Dividend>=Divisor){
            int i=0;
            while((Divisor<<i) <= Dividend){
                i++;
            }
            answer+=(1<<(i-1));
            Dividend-= (Divisor<<(i-1));
        }
        return answer*sign;
    }
};