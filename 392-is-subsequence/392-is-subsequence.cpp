class Solution {
public:
    bool isSubsequence(string s, string t) {
           bool ans=rec(s,t,0,0);
        return ans;
    }
   bool rec(string s,string t,int i,int j)
    {
        if(i==s.size())
        {
            return true;
        }
        if(j==t.size() && i<s.size())
        {
            return false;
        }
        if(s[i]==t[j])
        {
            bool ans=rec(s,t,i+1,j+1);
            return ans;
        }
        else
        {
            bool ans=rec(s,t,i,j+1);
            return ans;
        }
    }
};