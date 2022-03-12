class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int d1=0, d2=0, d3=0;
        int size = colors.size();
        if(colors[0]!=colors[size-1]) d3 = size-1;
        for(int i=1;i<=size-2;i++){
            if(colors[i]!=colors[0]){
                if(i>d1) d1 = i;
            }
            if(colors[size-1]!=colors[i]){
                if(size-1-i > d2) d2 = size-1-i;
            }
        }
        return max({d1,d2,d3});
    }
};