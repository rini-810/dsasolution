class Solution {
public:
    int climbStairs(int n) {
       if(n<=0)  return 0;
        if(n==1)  return 1;
        if(n==2)   return 2;
        
        int n2=1;
        int n1=2;
        int count=0;
     
        if(n>2){
               int i=3;
            while(i<=n){
             count= n2+n1;
                n2=n1;
                n1= count;
                i++;
            }
        }
         return count;
    }
};