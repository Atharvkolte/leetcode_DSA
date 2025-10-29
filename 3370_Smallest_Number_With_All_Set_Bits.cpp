class Solution {
public:
    int smallestNumber(int n) {
        int ans=1;
        while(n!=1){
            n/=2;
            ans=ans*2+1;
        }
        return ans;
    }
};
