class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector <int>> ans;
      int n=nums.size();
        int sum;
        for(unsigned int i=0;i<n-2;i++){
            if(i>0 &&nums[i]==nums[i-1])
                continue;
             int start=i+1;
        int end=n-1;
        while(end>start){
            sum=nums[i]+nums[start]+nums[end];
            if(sum>0)
                end--;
           else if(sum<0)
                start++;
            else if(sum==0){
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[start]);
                v.push_back(nums[end]);
                ans.push_back(v);
                while(start<end && nums[start]==nums[start+1]) start++;
                while(start<end && nums[end]==nums[end-1]) end--;
                start++;
                end--;
            }
        }
        }
       return ans;
    }
};