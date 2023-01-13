class Solution {
public:
    bool checkPalindromeFormation(string a, string b) {
        return find(a,b) || find(b,a);
           
    }
    bool find(string a,string b){
        int start=0;
        int end=a.size()-1;
        while(start<end){
            if(a[start]==b[end]){
                start++;
                end--;
            }
            else
                break;
        }
        return check(a,start,end) || check(b,start,end);
    }
    
    bool check(string a,int start,int end){
        while(start<end){
            if(a[start]!=a[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};