class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        move(nums2.begin(),nums2.end(),back_inserter(nums1));
        sort(nums1.begin(),nums1.end());
        int a=nums1.size();
        if(a%2==0){
            double ans=(nums1[a/2]+nums1[(a/2)-1])/2.0;
            return ans;
        }
        else{
            double ans=nums1[a/2];
            return ans;
        }
    }
};