class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size()-1;
        int limit=0;
        int res=0;
        
        while(m>=0){
            int n=grid[0].size()-1;
            while(n>=limit){
                if(grid[m][n]>=0){
                    limit=n+1;
                    break;
                }
                res++;
                n--;
            }
            m--;
        }
        return res;
    }
};