class Solution {
public:
    vector<vector<int>> ans;
    void rec(vector<int> temp, vector<int>& nums, int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        rec(temp,nums,i+1);
        temp.push_back(nums[i]);
        rec(temp,nums,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        rec(temp,nums,0);
        return ans;
    }
};
