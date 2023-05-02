class Solution {
public:
    int romanToInt(string s) {
       int ans=0;
        unordered_map<char,int> hm;
        hm.insert({'I',1});
        hm.insert({'V',5});hm.insert({'X',10});hm.insert({'L',50});hm.insert({'C',100});hm.insert({'D',500});hm.insert({'M',1000});
        // {'V',5},{'x',10},{'L',50},{'C',100},{'D',500},{'M',1000});
        for(int i=0;i<s.size();i++){
            if(hm[s[i]]<hm[s[i+1]]){
                ans-=hm[s[i]];
            }
            else{
                ans+=hm[s[i]];
            }
        }
        return ans;
    }
};