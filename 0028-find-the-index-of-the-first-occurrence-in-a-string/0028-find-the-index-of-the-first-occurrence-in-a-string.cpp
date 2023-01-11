class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size();
        int n=needle.size();
        if(!n)
            return 0;
        vector<int> lps=kmpprocess(needle);
        for(int i=0,j=0;i<m;){
            if(haystack[i]==needle[j])
                i++,j++;
            if(j==n)
                return i-j;
            if(haystack[i]!=needle[j])
                j? j=lps[j-1]:i++;
        }
        return -1;
        
    }
    
    vector<int> kmpprocess(string needle){
    int n=needle.size();
        vector<int> lps(n,0);
        for(int i=1,len=0;i<n;){
            if(needle[i]==needle[len])
                lps[i++]=++len;
            else if(len)
                len=lps[len-1];
            else
                lps[i++]=0;
        }
        return lps;
    }
};