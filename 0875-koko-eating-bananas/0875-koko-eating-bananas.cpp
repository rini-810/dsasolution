
class Solution {
public:
    bool check(vector<int>& piles, int& mid, int h ){
        long long int hours=0;
        for(int p:piles){
            int div=p/mid;
            hours += div;
            if(p%mid!=0)
                hours++;
        }
        if(hours<=h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int left=1;
        int right= *max_element(piles.begin(),piles.end());
        while(left<=right){
        int mid=left+(right-left)/2;
        
        if(check(piles,mid,h)) right=mid-1;
        else
            left=mid+1;
            }
        return left;
    }
};