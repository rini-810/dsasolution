class Solution {
public:
    string addBinary(string a, string b) {
        stack<string> binary;
        int i=a.size()-1;
        int j=b.size()-1;
        int sum=0,carry=0;
        string ans;
        while(i>=0 || j>=0){
              if(i<0)  sum=(b[j]-'0') + carry;
              else if(j<0)   sum=(a[i]-'0')+ carry;
             else  sum=(a[i]-'0')+(b[j]-'0') + carry;
            
            if(sum>=2)
                sum==2 ? binary.push("0"),carry=1 : (binary.push("1"),carry=1);
            if(sum==0)
                binary.push("0"),carry=0;
            if(sum==1) 
                binary.push("1"),carry=0;
            i--;
            j--;
            }
        if(carry==1)
            binary.push("1");
        while(!binary.empty()){
           ans += binary.top();
            binary.pop();
        }
        return ans;
        
        }
};