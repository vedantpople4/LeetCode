class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        long long ans=0, full = capacity;
        for (int i=0;i<plants.size();i++){
            if(capacity>=plants[i]){
                capacity-=plants[i];
                ans++;}
            else{
                ans+=2*(i);
                capacity = full;
                capacity-=plants[i];
                ans++;
            }
        }
            return ans;
    }
};
    
    
    