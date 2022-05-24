class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]==')' && st.top()!=-1 && s[st.top()]=='('){
                st.pop();
                ans = max(ans, i- st.top());
            }
            else st.push(i);
        }
        return ans;
    }
};