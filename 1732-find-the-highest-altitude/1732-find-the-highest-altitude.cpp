class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int g=0;
        for(int i=0;i<gain.size();i++){
            if(gain[i]+g>ans){
                ans=gain[i]+g;
                g=gain[i]+g;
            }
            else{
                g=gain[i]+g;
            }
        }
        return ans;
    }
};