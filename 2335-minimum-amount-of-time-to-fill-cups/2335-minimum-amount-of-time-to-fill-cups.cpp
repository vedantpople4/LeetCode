class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(), amount.end());
        int a = amount[0];
        int b = amount[1];
        int c = amount[2];
        int sum = a+b+c;
        if(a+b > c) return sum/2+sum%2;
        if(a==0 && b==0) return c;
        else return c;
    }
};