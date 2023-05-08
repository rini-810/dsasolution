class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size()-1;
        int sum=0;
        for(int i=0;i<m;i++){
         if(i!=n-i){
            sum += mat[i][i]+mat[i][n-i];
         }  
            else
                sum+=mat[i][i];
        }
        
        return sum;
    }
};