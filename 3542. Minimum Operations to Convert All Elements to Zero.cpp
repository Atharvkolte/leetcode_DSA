class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int>nextSmaller(n,n);
        unordered_map<int,set<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].insert(i);
        }
        stack<int>st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && nums[i]<=nums[st.top()]){
                st.pop();
            }
            if(st.size()>0) nextSmaller[i]=st.top();
            st.push(i);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) continue;
            int j=nextSmaller[i];
            count++;
            for(int curr:mp[nums[i]]){
                if(curr>=j){
                    break;
                }
                mp[nums[i]].erase(curr);
                nums[curr]=0;
            }
        }
        return count;
    }
};
