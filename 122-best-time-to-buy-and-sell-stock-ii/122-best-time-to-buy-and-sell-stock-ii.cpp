class Solution {
public:
    //peak valley approach
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int valley=prices[0];
        int peak=prices[0];
        int maxprofit=0;
        int i=0;
       while(i<n-1){
           while(i<n-1 && prices[i]>=prices[i+1])
               i++;
               valley=prices[i];
           while(i<n-1 && prices[i]<=prices[i+1])
               i++;
               peak=prices[i];
              
            maxprofit += peak - valley;
       }
        return maxprofit;
    }
};