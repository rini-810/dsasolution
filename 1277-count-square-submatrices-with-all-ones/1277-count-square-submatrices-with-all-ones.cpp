class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0){
                    dp[i][j]=matrix[i][j];
                    count += dp[i][j];
                }
                else if(matrix[i][j]!=0){
                    dp[i][j]= min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                    count += dp[i][j];
                }
                else
                    dp[i][j]=0;
            }
        }
        
        return count;
    }
};