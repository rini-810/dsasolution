class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> hm;
        for(int i=0;i<nums2.size();i++){
            hm[nums2[i]]++;
            
        }
        for(int j=0;j<nums1.size();j++){
            if(hm[nums1[j]]>0){
                hm[nums1[j]]--;
                ans.push_back(nums1[j]);
            }
        }
        return ans;
    }
};