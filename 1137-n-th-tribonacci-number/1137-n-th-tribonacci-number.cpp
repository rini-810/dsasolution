class Solution {
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,1);
        dp[0]=0;
        for(int i=3;i<n+1;i++){
            dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
        }
        
        return dp[n];
    }
};