class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>hm;
        hm[s[0]];
        int ans=0;
        for(int i=1;i<s.size();i++){
            if(hm.find(s[i])!=hm.end()){
                hm.clear();
                ans++;
                hm[s[i]];
            }
            else{
                hm[s[i]];
            }
        }
        return ans+1;
    }
};