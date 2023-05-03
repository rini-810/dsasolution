class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> hm1;
          unordered_map<int,int> hm2;
        for(int i=0;i<nums2.size();i++){
           hm2[nums2[i]]++;
        }
        
         for(int i=0;i<nums1.size();i++){
           hm1[nums1[i]]++;
        }
        
        vector<int> a;
        for(int i=0;i<nums1.size();i++){
            
            if(hm2.find(nums1[i])!=hm2.end()){
                continue;
            }
            else{
                if(hm1.find(nums1[i])!=hm1.end())
                a.push_back(nums1[i]),hm1.erase(nums1[i]);
            }
        }
        ans.push_back(a);
        
        a.clear();
       
     
        for(int i=0;i<nums2.size();i++){
            
            if(hm1.find(nums2[i])!=hm1.end()){
                continue;
            }
            else{
               if(hm2.find(nums2[i])!=hm2.end())
                a.push_back(nums2[i]),hm2.erase(nums2[i]);
            }
        }
        ans.push_back(a);
        
        return ans;
    }
};