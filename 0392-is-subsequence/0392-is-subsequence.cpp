class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int> dp(t.size()+1,0);
        for(int i=1;i<s.size()+1;i++){
            int pre=dp[0];
            for(int j=1;j<t.size()+1;j++){
                int temp=dp[j];
                if(s[i-1]==t[j-1])
                    dp[j]=1+pre;
                else
                    dp[j]=max(dp[j],dp[j-1]);
                pre=temp;
            }
        }
        return dp[t.size()]==s.size()?true:false;
    }
};