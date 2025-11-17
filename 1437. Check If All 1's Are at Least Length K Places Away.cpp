class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int prevIndex=-1;
        int i=0;
        for(i=0;i<n;i++){
            if(nums[i]==1){
                if(prevIndex==-1){
                    prevIndex=i;
                    continue;
                }
                else{
                    int distance = i-prevIndex-1;
                    if(distance >= k) prevIndex=i;
                    else return false;
                }
            }   
        }
        return true;
    }
};
