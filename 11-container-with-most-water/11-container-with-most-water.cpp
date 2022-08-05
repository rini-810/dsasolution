class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        //vector <pair<int,int>> ans;
        // for(int i=0;i<n;i++){
        //  ans.push_back(make_pair(i,height[i]));
        // }
        int start=0;
        int end=n-1;
        int area;
        int temp=INT_MIN;
        while(end>start){
            area=(end-start)* min(height[start], height[end]);
          temp= max(temp,area);

          if(height[end]>height[start]){
                start++;
            }
            else {
                end--;
            }
            
        }
        return temp;
    }
};