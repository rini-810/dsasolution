class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
        int size=s.size();
      for(int i=0;i<k;i++){
          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
              ans++;
          }
      }
        int m=ans;
        int i=k;
        while(i<size){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
               m++;
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
                m--;
            ans=max(ans,m);
            i++;
        }
        
            
        return ans;
    }
};