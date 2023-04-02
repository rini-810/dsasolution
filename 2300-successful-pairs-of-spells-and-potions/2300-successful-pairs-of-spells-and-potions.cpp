class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        //sort(spells.begin(),spells.end());
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            long long int a=spells[i];
            int low=0;
            int high=potions.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(a*potions[mid]<success){
                    low=mid+1;
                }
                else
                    high=mid-1;
            }
            ans.push_back(potions.size()-low);
        }
        return ans;
    }
};