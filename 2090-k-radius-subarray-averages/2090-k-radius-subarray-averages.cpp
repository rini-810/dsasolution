class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
       vector<int> ans(nums.size(),-1);
        long long sum=0;
        long long start=0;
        long long end=2*k;
        if(nums.size()<(2*k+1)){
            return ans;
        }
        for(int i=0;i<=end && i<n;i++){
            sum+=nums[i];
        }
        
        while(end<nums.size()){
            ans[end-k]=sum/(2*k+1);
            end++;
            if(end==n) break;
            sum+=nums[end];
            sum-=nums[start];
            start++;
        }
        
        return ans;
    }
};