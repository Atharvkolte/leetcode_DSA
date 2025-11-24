class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n=nums.size(); 
        int sum=0;
        vector<bool>ans;
        for(int i:nums){
            sum*=2;
            sum=(sum+i)%5;
            ans.push_back(sum==0?true:false);
        }
       
       return ans;
    }
};
