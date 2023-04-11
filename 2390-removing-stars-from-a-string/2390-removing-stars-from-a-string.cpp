class Solution {
public:
    string removeStars(string s) {
        int i=0,j=0;
        while(i<s.size()){
            if(s[i]!='*'){
                s[j++]=s[i++];
            }
            else{
                j--;
                i++;
            }
        }
        string ans="";
        for(int p=0;p<j;p++){
            ans += s[p];
        }
        return ans;
    }
};