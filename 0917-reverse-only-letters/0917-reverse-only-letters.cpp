class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.size()-1;
        while(right>left){
            while (right>left && !isalpha(s[left])) ++left;
            while (right>left && !isalpha(s[right])) --right;
            swap(s[left++], s[right--]);
        }
        return s;
    }
};