class Solution {
public:
    bool check(long long time,int n,vector<int>& batteries){
        long long contribute=0;
        for(int i:batteries){
            contribute+=min(time,1LL*i);
            if(contribute>=n*time){
                return true;
            }
        }
        return false;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        sort(batteries.rbegin(),batteries.rend());
        long long low=0,high=1e14,ans=0;
        while(low<=high){
            long long mid=(low+high)/2;
            if(check(mid,n,batteries)){
                low=mid+1;
                ans=max(ans,mid);
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
