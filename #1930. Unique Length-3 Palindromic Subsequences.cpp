class Solution {
    public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        vector<int> first(26,-1);
        vector<int> last(26,-1);
        for(int i=0;i<n;i++){
            int val=s[i]-'a';
            if(first[val]==-1){
                first[val]=i;
            }
            last[val]=i;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            unordered_set<int> distinct;
            for(int j=first[i]+1;j<last[i];j++){
                distinct.insert(s[j]);
            }
            ans+=distinct.size();
        }
        return ans;
    }
};
