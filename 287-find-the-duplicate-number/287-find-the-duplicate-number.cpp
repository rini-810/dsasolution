class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         unordered_map<int,int> hm;
        int n=nums.size();
        int a;
        for(int i=0;i<n;i++){
           hm.insert(pair<int,int> (nums[i],hm[nums[i]]++));
            
           
        }
        
        for(auto it : hm){
            //cout<<it.first<<" "<<it.second;
            if(it.second>1)
                a=it.first;
            
        }
        return a;
        
    }
};