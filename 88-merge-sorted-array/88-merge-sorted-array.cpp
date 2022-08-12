class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
             int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                i++;
            
            }
            else if(nums1[i]>nums2[j]){
                int temp=nums1[i];
                nums1[i]=nums2[j];
                nums2[j]=temp;
                sort(nums2.begin(),nums2.end());
                i++;
            }
        }
            while(i>=m && j<n){
                nums1[i]=nums2[j];
                i++;
                j++;
            }
    
        
                
                
        
    }
};