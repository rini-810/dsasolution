class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> v;
        gen(v,"",n,0);
        return v;
    }
    void gen(vector<string>& v,string s,int n,int m){
        if(n==0 && m==0){
           v.push_back(s);
            return;
        }
        if(m>0)
             gen(v, s+")",n,m-1);
        if(n>0)
             gen(v,s+"(",n-1,m+1);
    }
};