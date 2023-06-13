class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int>mp;
        int res=0;
        for(int i=0;i<grid.size();i++){
            string temp="";
            for(int j=0;j<grid.size();j++){
                temp+=to_string(grid[i][j])+'#';
            }
            mp[temp]++;
        }
        for(int j=0;j<grid.size();j++){
            string check="";
            for(int i=0;i<grid.size();i++){
                check+=to_string(grid[i][j])+'#';
            }
            res+=mp[check];
        }
        
        return res;
    }
};