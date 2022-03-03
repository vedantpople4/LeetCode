class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 0, right = LLONG_MAX/time.size();
        while(left<right){
            long long m = (left+right)/2, trips = 0;
            for(int t:time) trips += m/t;
            if(trips<totalTrips) left = m+1;
            else right = m;
        }
        return left;
    }
};


