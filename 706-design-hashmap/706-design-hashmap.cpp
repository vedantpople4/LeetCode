class MyHashMap {
public:
    vector<int> ans;
    MyHashMap() {
        ans.resize(10e6, -1);
    }
    
    void put(int key, int value) {
        ans[key] = value;
    }
    
    int get(int key) {
        if(ans[key]!=-1)
        return ans[key];
        else return -1;
    }
    
    void remove(int key) {
        ans[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
