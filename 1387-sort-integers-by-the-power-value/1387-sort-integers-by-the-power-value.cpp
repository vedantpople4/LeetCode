class Solution {
public:
    int getans(int num){
        int ans = 0;
        while(num!=1){
            if(num%2==0) num/=2;
            else num = num*3 + 1;
            ans++;
        }
        return ans;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> ansv;
        for(int i=lo; i<=hi;i++){
            ansv.push_back(make_pair(i,getans(i)));
        }
        sort(ansv.begin(), ansv.end(), [](auto &left, auto &right){
            if(left.second != right.second) return left.second < right.second;
            else return left.first < right.first;
        });
        return ansv[k-1].first;
    }
};