class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
    vector<int> v(n,0);
        for(int i=1,len=0;i<s.size();){
            if(s[i]==s[len])
              v[i++]=++len;
            else if(len)
                len=v[len-1];
            else
                v[i++]=0;
        }
        
        return v[n-1] && v[n-1]%(n-v[n-1])==0;
    }
};