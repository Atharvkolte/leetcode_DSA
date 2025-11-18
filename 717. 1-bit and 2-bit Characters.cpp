class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        bool flag=true;
        for(int i=0;i<n;i++){
            if(bits[i]==1){
                flag=false;
                i++;
                continue;
            }
            else flag=true;
        }
        return flag;
    }
};
