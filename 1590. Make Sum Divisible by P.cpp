class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum=0;
        int n=nums.size();
        for(int i:nums) sum+=i;
        long long x=sum%p;
        if(x==0) return 0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        long long prefix=0;
        int ans=n;
        for(int i=0;i<n;i++){
            prefix=(prefix+nums[i])%p;
            int need=(prefix-x+p)%p;
            if(mp.count(need)) ans=min(ans,i-mp[need]);
            mp[prefix]=i;
        }
        return ans==n?-1:ans;
    }
};
