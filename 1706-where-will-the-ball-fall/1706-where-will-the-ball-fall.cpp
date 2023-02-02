class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid[0].size();
        vector<int> dp;
        bool isstuck=false;
        for(int a=0;a<n;a++){
        int i=0,j=a;
        bool isstuck=false;
        while(i<grid.size() && j<n)
        {
            
            if(grid[i][j]==1)
            {
                if(j==n-1 || grid[i][j+1]==-1)
                {
                    isstuck=true;
                    break;
                }
                else
                {
                    j++;
                }
            }
            else
            {
                if(j==0 || grid[i][j-1]==1)
                {
                    isstuck=true;
                    break;
                }
                else{
                j--;
                }
            }
            i++;
            
        }
            if(isstuck==true)
            {
                dp.push_back(-1);
            }
            else
            {
                dp.push_back(j);
            }
            
        }
        return dp;
    }
};