class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans(r,vector<int>(c));
        if(m*n>r*c || m*n<r*c){
            return mat;
        }
        for(int i=0;i<m*n;i++){
           ans[i/c][i%c]=mat[i/n][i%n];
            }
        return ans;
    }
};