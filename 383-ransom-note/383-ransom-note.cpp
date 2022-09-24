class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> hm;
        for(int i=0;i<magazine.size();i++)
            hm[magazine[i]]++;
        for(int i=0;i<ransomNote.size();i++)
            hm[ransomNote[i]]--;
        for(auto it: hm){
           if(it.second<0){
               return false;
               break;
           }
        }
        return true;
    }
};