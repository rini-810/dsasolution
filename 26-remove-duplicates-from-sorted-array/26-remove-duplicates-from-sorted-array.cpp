#include <bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;
        int j=i+1;
        while(i<nums.size() && j<nums.size()){
            int temp= nums[i];
            if(nums[j]== temp){
                j++;
            }
            else if(temp != nums[j]){
                int swap= nums[i+1];
                nums[i+1]=nums[j];
                nums[j]= swap;
                i++;
                j++;
            }
        }
        return i+1;
        
        
    }
};