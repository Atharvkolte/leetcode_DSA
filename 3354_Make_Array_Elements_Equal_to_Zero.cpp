class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int curr=0;
        int lsum=0;
        int rsum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            lsum+=nums[i];
            if(nums[i]==0){ 
                int j=i+1;
                rsum=0;
                while(j<nums.size()){
                    rsum+=nums[j];
                    j++;
                }
                if(abs(lsum-rsum)==1) ans+=1;
                if(lsum==rsum) ans+=2;
            }
            
        }
        return ans;
    }
};
