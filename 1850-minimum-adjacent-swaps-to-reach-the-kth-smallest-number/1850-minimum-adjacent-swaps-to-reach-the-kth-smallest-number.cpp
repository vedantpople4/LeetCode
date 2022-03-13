class Solution {
public:
    int getMinSwaps(string num, int k) {
        vector<int> org , dup;
        int sum =0, n = num.size();
        for(int i=0;i<n;i++) org.push_back(num[i]);
        for(int i=0;i<org.size();i++) dup.push_back(org[i]);
        while(k){
            next_permutation(org.begin(), org.end());
            k--;
        }
        for(int i=0;i<org.size();i++){
            if(org[i]==dup[i]) continue;
            else{
                int j=i+1;
                while(org[i]!=dup[i]){
                   swap(dup[i],dup[j]);
                   j++;
                   sum++;
            }
          }
        }
            return sum;
        
    }
};