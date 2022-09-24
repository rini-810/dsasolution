class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> hm;
        int idx=s.size();
       for(int i=0;i<s.size();i++){
           hm[s[i]].first++;
           hm[s[i]].second=i;
       }
        for(auto it:hm){
            if(it.second.first==1)
              idx=min(idx,it.second.second);  
        }
        
        if(idx==s.size())
            return -1;
        else
            return idx;
                
            
        
    }
};