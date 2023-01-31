class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n,0);
        int m=arr[0];
        for(int i=0;i<k;i++){
            m=max(m,arr[i]);
            dp[i]=m*(i+1);
        }
        for(int i=k;i<n;i++){
            m=arr[i];
            for(int j=1;j<=k;j++){
                m=max(m,arr[i-j+1]);
                dp[i]=max(dp[i],dp[i-j]+m*j);
            }
        }
        return dp[n-1];
    }
};