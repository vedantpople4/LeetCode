class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
for(int i=0;i<arr.size();i++)
{
mp[arr[i]]++;
}

    vector<int>a;
    
    for(auto i:mp)
    {
        a.push_back(i.second);
    }
    if(a.size()==1)
        return 1;
    sort(a.begin(),a.end(),greater<int>());
    
    int size=arr.size(),sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
        if(sum>=size/2)
            return i+1;
    }
    return a.size();
    }
};