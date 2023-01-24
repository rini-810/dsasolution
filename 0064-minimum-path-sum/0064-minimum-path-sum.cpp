class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        // for(int i=1;i<m;i++){
        //     grid[i][0] += grid[i-1][0];
        // }
        // for(int j=1;j<n;j++){
        //     grid[0][j] += grid[0][j-1];
        // }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    continue;
                 else if(i==0 && j!=0){
                     
                    grid[i][j] += grid[i][j-1];
                   
                }
                else if(j==0 && i){
                    
                    grid[i][j] += grid[i-1][j];
                    
                }
                 
                else
                grid[i][j] = min(grid[i][j]+grid[i-1][j], grid[i][j]+grid[i][j-1]);
                 
            }
        }
        return grid[m-1][n-1];
    }
};