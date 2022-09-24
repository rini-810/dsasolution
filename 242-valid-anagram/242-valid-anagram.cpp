class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int s1=s.size();
        int s2=t.size();
        if(s1>s2){
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i])
                continue;
            else
                return false;
        }
        }
        else{
            for(int i=0;i<t.size();i++){
            if(s[i]==t[i])
                continue;
            else
                return false;
        }
        }
        return true;
    }
};