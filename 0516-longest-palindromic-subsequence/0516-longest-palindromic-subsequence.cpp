class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string t=string(s.rbegin(),s.rend());
        vector<vector<int>> dp(s.size()+1,vector<int>(s.size()+1,0));
        for(int i=1;i<t.size()+1;i++){
            for(int j=1;j<s.size()+1;j++){
                if(t[i-1]==s[j-1])
                    dp[i][j]= 1+ dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[t.size()][s.size()];
    }
};