class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x){
            int rem=x%10;
            ans=ans*10+rem;
            x /=10;
        }
        
        return (ans<INT_MIN || ans>INT_MAX)? 0 : ans;
    }
};