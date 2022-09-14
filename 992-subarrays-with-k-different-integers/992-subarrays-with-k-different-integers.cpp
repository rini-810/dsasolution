class Solution {
public:
    int atmost(vector<int>& nums,int a){
     int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
        unordered_map<int,int> hm;
        while(i<n){
            hm[nums[i]]++;
            while(hm.size()>a){
                hm[nums[j]]--;
                auto it= hm.find(nums[j]);
                if(it->second==0) hm.erase(it);
                j++;
            }
            count+=(i-j+1);
            i++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};