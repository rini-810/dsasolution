class Solution {
public:
    bool validPalindrome(string s) {
        return check(0,s.size()-1,s,0);
    }
    bool check(int lo,int hi,string s,int count){
        if(count>1)
            return false;
        while(lo<hi){
        if(s[lo]==s[hi]){
            lo++;
            hi--;
        }
        else{
            return check(lo+1,hi,s,count+1) || check(lo,hi-1,s,count+1);
        }
        }
        return true;
    }
};