class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char> a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !a.empty())
                a.pop();
            if(s[i]!='#')
                a.push(s[i]);
        }
        for(int j=0;j<t.size();j++){
            if(t[j]=='#' && !b.empty())
                b.pop();
            if(t[j]!='#')
                b.push(t[j]);
        }
        
        return a==b;
        
    }
};