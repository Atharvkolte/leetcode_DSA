class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;// min Cost
        int prev=0; // what was prev
        for(int i=1;i<colors.size();i++){
            if(colors[prev]==colors[i]){
                if(neededTime[prev]>neededTime[i]){
                    ans+=neededTime[i];
                }
                else{
                    ans+=neededTime[prev];
                    prev=i;
                }
            }
            else{
                prev=i;
            }
        }
        return ans;
    }
};
