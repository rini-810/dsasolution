class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> hm;
        for(int i=0;i<nums1.size();i++){
            hm[nums1[i]]++;
            
        }
        for(int j=0;j<nums2.size();j++){
            if(hm[nums2[j]]>0){
                hm[nums2[j]]--;
                ans.push_back(nums2[j]);
            }
        }
        return ans;
    }
};