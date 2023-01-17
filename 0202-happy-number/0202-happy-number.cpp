class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> hm;
        while(n!=1){
            int ans=sum(n);
             if(hm.find(ans)!=hm.end())
                return false;
            hm[ans]++;
            n=ans;
           
        }
        return true;
    }
    int sum(int n){
        int ans=0;
        while(n!=0){
           int rem=n%10;
            ans += pow(rem,2);
            n /=10;
            
        }
        return ans;
    }
};