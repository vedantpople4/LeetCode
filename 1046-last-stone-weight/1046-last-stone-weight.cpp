class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
       if(v.size()==1) return v[0];
        priority_queue<int> p;
        for(auto x:v) p.push(x);
        while(p.size()!=1){
            int a = p.top();
            p.pop();
            int b = p.top();
            p.pop();
            p.push(a-b);
        }
        return p.top();
    }
};

