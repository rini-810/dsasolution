class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=1;
        for(int i=0;i<points.size()-1;i++){
            unordered_map<double,int> hm;
            for(int j=i+1;j<points.size();j++){
            double x= (double) (points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
                if(points[j][1]-points[i][1]<0 && points[j][0]-points[i][0]==0)
                    hm[abs(x)]++;
                else
                    hm[x]++;
            }
            int temp=0;
            for(auto it: hm)
                temp= max(temp,it.second+1);
            ans= max(temp,ans);
        }
        return ans;
    }
};