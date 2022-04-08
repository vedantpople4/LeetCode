class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> p;
    int q;
    KthLargest(int k, vector<int>& nums) {
        q = k;
        for(int it:nums){
            p.push(it);
            if(p.size()>q)
                p.pop();
        }
    }
    
    int add(int val) {
        p.push(val);
        if(p.size()>q) p.pop();
        return p.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */