class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int sum=target[0];
        if(target.size()==1) return target[0];
        for(int i=1;i<target.size();i++){
            if(target[i-1]<target[i]) sum+=target[i]-target[i-1];
        }
        return sum;
    }
};
