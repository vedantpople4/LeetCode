class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        stack<int> st;
        int len = colors.length();
        int ans = 0;
        st.push(0);
        for(int i=1;i<len;i++){
            if(colors[i]!=colors[st.top()]){
                st.push(i);
                //cout<<st.top();
            }
            else{
                if(time[i]>=time[st.top()]){
                ans += time[st.top()];
                //cout<<ans;
                st.pop();
                st.push(i);
                }
                else ans+= time[i];
            }
        }
        //cout<<ans;
        return ans;
    }
};