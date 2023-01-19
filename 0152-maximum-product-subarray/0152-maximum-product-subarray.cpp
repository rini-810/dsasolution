class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,prod=INT_MIN;
        for(int i=0;i<n;i++){
            l=(l ? l : 1)* nums[i];
            r=(r ? r : 1)* nums[n-1-i];
            prod=max(prod,max(l,r));
        }
        return prod;
    }
};