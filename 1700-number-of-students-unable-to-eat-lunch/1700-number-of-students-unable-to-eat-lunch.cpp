class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zero = 0;
        int one = 0;
        for(auto &i : students){
            if(i==1) ++one;
            else ++zero;
        }
        for(auto &i : sandwiches){
            if(i==1 && one>0) --one;
            else if (i==1 && one<1 ) return zero+one;
            else if (i==0 && zero>0) --zero;
            else if (i==0 && zero<1) return zero+one;
        }
        return 0;
    }
};