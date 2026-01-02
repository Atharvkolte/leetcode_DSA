class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        int ans=0;
        int freq=0;
        for(auto &x:mp){
            if(freq< x.second){
                freq=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};
