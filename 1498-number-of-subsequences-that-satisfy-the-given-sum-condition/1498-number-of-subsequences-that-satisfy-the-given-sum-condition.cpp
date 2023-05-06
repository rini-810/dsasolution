class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int res = 0, mod = 1000000007, start = 0, end = nums.size() - 1;
        vector<int> pre = {1};
        for (auto i = 1; i <= nums.size(); ++i)
            pre.push_back((pre.back() << 1) % mod);   
                
        sort(nums.begin(),nums.end());
        
        while (start <= end) {
            if (nums[start] + nums[end] > target) {
                end--;
            } else {
                res = (res + pre[end - start]) % mod;
                                 start++;
            }
        }

        return res;
    }
};