class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> p;
        long long sum = 0;
        for(auto num: target){
            p.push(num);
            sum+=num;
        }
        while(p.top()!=1){
            sum -= p.top();
            if(sum==0 || sum>=p.top()) return false;
            int old = p.top()%sum;
            if(sum !=1 && old==0) return false;
            p.pop();
            p.push(old);
            sum+=old;
        }
        return true;
    }
};