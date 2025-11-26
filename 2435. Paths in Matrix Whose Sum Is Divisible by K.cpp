class Solution {
public:
    int MOD=1e9+7;
    vector<vector<vector<int>>>dp;
    int solve(int x,int y,vector<vector<int>>& grid,int k,int sum){
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        if(x==m-1 && y==n-1){
            return ((sum+grid[x][y])%k==0)?1:0;
        }
        int currsum=(sum+grid[x][y])%k;
        if(dp[x][y][currsum]!=-1) return dp[x][y][currsum];
        if(x+1<m) count=(count+solve(x+1,y,grid,k,currsum))%MOD;
        if(y+1<n) count=(count+solve(x,y+1,grid,k,currsum))%MOD;
        return dp[x][y][currsum]=count;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        dp.assign(m,vector<vector<int>>(n,vector<int>(k,-1)));
        return solve(0,0,grid,k,0);
    }
};
