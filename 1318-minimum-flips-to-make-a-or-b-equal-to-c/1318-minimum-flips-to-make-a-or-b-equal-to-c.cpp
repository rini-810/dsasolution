class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res=0;
        while(c|a|b){
            if(c&1){
               res+= (a&1)|(b&1)?0:1; 
            }
            else{
                res+= a&1?1:0;
                res+= b&1?1:0;
            }
            c>>=1;
            a>>=1;
            b>>=1;
        }
        
        return res;
    }
};