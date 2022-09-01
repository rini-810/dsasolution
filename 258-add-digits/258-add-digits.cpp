class Solution {
public:
    int addDigits(int num) {
      return rec(num);
        
    }
    int rec(int num){
      int a= num/10;
        int b=num%10;
        if(num<10)  return num;
        if(a==0 && b>0 ){
            return 1;
        }
        
        int c = a+b;
        int ans=rec(c);
        return ans;
    }
};