class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> diff(n+1,vector<int>(n+1,0));
        for(auto i:queries){
            int row1=i[0];
            int col1=i[1];
            int row2=i[2];
            int col2=i[3];
            diff[row1][col1]+=1;
            diff[row2+1][col1]-=1;
            diff[row1][col2+1]-=1;
            diff[row2+1][col2+1]+=1;
        }
        vector<vector<int>> matrix(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int left=0;
                if(j>0){
                    left=matrix[i][j-1];
                }
                int up=0;
                if(i>0){
                    up=matrix[i-1][j];
                }
                int common=0;
                if(i>0&&j>0){
                    common=matrix[i-1][j-1];
                }
                matrix[i][j]=diff[i][j]+left+up-common;
            }
        }
        return matrix;
    }
};
