class Solution {
public:
    void sortColors(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        int mid=0;
        int temp=0;
        
        while(mid<=high){
            if(nums[mid]==0){
            temp= nums[low];
                nums[low]=nums[mid];
                nums[mid]= temp;
                low++;
                mid++;
                }
            else if(nums[mid]==1){
               mid++;
        
            }
            else{
                temp= nums[high];
                nums[high]=nums[mid];
                nums[mid]=temp;
                high--;
            }
        }
    }
};