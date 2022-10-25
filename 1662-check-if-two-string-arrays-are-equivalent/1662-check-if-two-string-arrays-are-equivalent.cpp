class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        auto s1 = reduce(w1.begin(), w1.end());
        auto s2 = reduce(w2.begin(), w2.end());
        return s1==s2;
    }
};