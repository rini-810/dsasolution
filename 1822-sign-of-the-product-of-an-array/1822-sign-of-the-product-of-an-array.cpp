class Solution {
public:
    int arraySign(vector<int>& nums) {
int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                k++;
            }
        }
        if(k%2){
            return -1;
        }
        else
            return 1;
    }
};