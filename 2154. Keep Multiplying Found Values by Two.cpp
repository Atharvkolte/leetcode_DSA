class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        int ans=original;
        sort(nums.begin(),nums.end());
        bool flag=false;
        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                flag=true;
                //i=0;
            }
            if(nums[i]==ans && flag) ans*=2;
        }
        return ans;
    }
};
