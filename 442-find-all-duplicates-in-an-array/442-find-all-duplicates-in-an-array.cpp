#include<bits/stdc++.h>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        unordered_map<int,int> hm;
        while(i<n){
            
        hm.insert(make_pair(nums[i],hm[nums[i]]++));
            i++;
        }   
            for(auto it: hm){
                if(it.second==2)
                    ans.push_back(it.first);
            }
        return ans;
        }
};